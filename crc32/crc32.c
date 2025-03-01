/*
 * crc32.c - Routines for crc calculation
 *
 * This file is a part of the NetBench suite
 *
 * This source file is distributed "as is" in the hope that it will be
 * useful. The suite comes with no warranty, and no author or
 * distributor accepts any responsibility for the consequences of its
 * use.
 * 
 * Everyone is granted permission to copy, modify and redistribute
 * this tool set under the following conditions:
 * 
 *    Permission is granted to anyone to make or distribute copies
 *    of this source code, either as received or modified, in any
 *    medium, provided that all copyright notices, permission and
 *    nonwarranty notices are preserved, and that the distributor
 *    grants the recipient permission for further redistribution as
 *    permitted by this document.
 *
 *    Permission is granted to distribute this file in compiled
 *    or executable form under the same conditions that apply for
 *    source code, provied that either:
 *
 *    A. it is accompanied by the corresponding machine-readable
 *       source code,
 *    B. it is accompanied by a written offer, with no time limit,
 *       to give anyone a machine-readable copy of the corresponding
 *       source code in return for reimbursement of the cost of
 *       distribution.  This written offer must permit verbatim
 *       duplication by anyone, or
 *    C. it is distributed by someone who received only the
 *       executable form, and is accompanied by a copy of the
 *       written offer of source code that they received concurrently.
 *
 * In other words, you are welcome to use and share this source file.
 * You are forbidden to forbid anyone else to use, share and improve
 * what you give them. 
 *  
 */

/* crc32.c -- package to compute 32-bit CRC one byte at a time          */
/*                                                                      */
/* Synopsis:                                                            */
/*  gen_crc_table() -- generates a 256-word table containing all CRC    */
/*                     remainders for every possible 8-bit byte.  It    */
/*                     must be executed (once) before any CRC updates.  */
/*                                                                      */
/*  unsigned update_crc(crc_accum, data_blk_ptr, data_blk_size)         */
/*           unsigned crc_accum; char *data_blk_ptr; int data_blk_size; */
/*           Returns the updated value of the CRC accumulator after     */
/*           processing each byte in the addressed block of data.       */
/*                                                                      */
/*  It is assumed that an unsigned long is at least 32 bits wide and    */
/*  that the predefined type char occupies one 8-bit byte of storage.   */
/*                                                                      */
/*  The generator polynomial used for this version of the package is    */
/*  x^32+x^26+x^23+x^22+x^16+x^12+x^11+x^10+x^8+x^7+x^5+x^4+x^2+x^1+x^0 */
/*  as specified in the Autodin/Ethernet/ADCCP protocol standards.      */
/*  Other degree 32 polynomials may be substituted by re-defining the   */
/*  symbol POLYNOMIAL below.  Lower degree polynomials must first be    */
/*  multiplied by an appropriate power of x.  The representation used   */
/*  is that the coefficient of x^0 is stored in the LSB of the 32-bit   */
/*  word and the coefficient of x^31 is stored in the most significant  */
/*  bit.  The CRC is to be appended to the data most significant byte   */
/*  first.  For those protocols in which bytes are transmitted MSB      */
/*  first and in the same order as they are encountered in the block    */
/*  this convention results in the CRC remainder being transmitted with */
/*  the coefficient of x^31 first and with that of x^0 last (just as    */
/*  would be done by a hardware shift register mechanization).          */
/*                                                                      */
/*  The table lookup technique was adapted from the algorithm described */
/*  by Avram Perez, Byte-wise CRC Calculations, IEEE Micro 3, 40 (1983).*/
/*                                                                      */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "packet_lengths.h"
#include "headers.h"

#define POLYNOMIAL 0x04c11db7L
#define MAX_PACKETS 100

static unsigned long crc_table[256];

/* Traces automatically drop the TCP checksum and urgent pointer, so header is 36 bytes */
#define HEADER_SIZE 36

#ifdef CONSTANT_PACKET
unsigned int packet_index = 0;
#endif

__attribute__((__annotate__("SGX")))
char *
get_next_packet (int packet_number)
{
  char *packet;
  unsigned int packet_length;
  
  packet_number = packet_number % MAX_PACKETS;

  packet_length = (packet_lengths[packet_number]);
  if (packet_length < 40)
    {
      /* Should never happen */
      // printf ("Packet not large enough, increasing the size\n");
      packet_length = 40;
    }

#ifdef CONSTANT_PACKET
  /* Packets are stored in a continuous chunk in the memory, just change the index... */
  packet = &packets[packet_index];
  packet_index += packet_length;
#else
  /* Have to call malloc to create packet memory */
  if ((packet =  (char *) malloc (packet_length)) == NULL)
    {
      // printf ("Not enough space to create packet data \n");
      // exit (1);
      return packet;
    }

  /* Copy the header information */
  memset((void*)packet, 0, packet_length);
  memcpy ((void *)packet, (void *)headers[packet_number], HEADER_SIZE);
#endif

  return packet;
}

/* For debugging purposes, to get the size of the packet_numberth packet */
__attribute__((__annotate__("SGX")))
unsigned int 
packet_size (unsigned int packet_number)
{
  packet_number = packet_number % MAX_PACKETS;
  return (packet_lengths[packet_number]);
}


/* generate the table of CRC remainders for all possible bytes */
__attribute__((__annotate__("SGX")))
void 
gen_crc_table()
{ 
  register int i, j;  
  register unsigned long crc_accum;
  
  for (i = 0;  i < 256;  i++)
    { 
      crc_accum = ((unsigned long) i << 24);
      for (j = 0;  j < 8;  j++)
	{ 
	  if (crc_accum & 0x80000000L)
	    crc_accum = (crc_accum << 1) ^ POLYNOMIAL;
	  else
	    crc_accum = (crc_accum << 1); 
	}
      crc_table[i] = crc_accum; 
    }
  return; 
}

/* update the CRC on the data block one byte at a time */
__attribute__((__annotate__("SGX")))
unsigned long 
update_crc(unsigned long crc_accum, 
	   char *data_blk_ptr,
	   int data_blk_size)
{ 
  register int i, j;
  for (j = 0;  j < data_blk_size;  j++)
    { 
      i = ((int)(crc_accum >> 24) ^ *data_blk_ptr++) & 0xff;
      crc_accum = (crc_accum << 8) ^ crc_table[i]; 
    }
  return crc_accum; 
}

__attribute__((__annotate__("SGX"), __annotate__("memsize(4, 4)"), __annotate__("TAFUN")))
void d_crc32(int *numpacketsp, unsigned long *crc_accump)
{
  unsigned long crc_accum = *crc_accump;
  int i = 0, numpackets = *numpacketsp;
  char *packet;
  
  gen_crc_table();
  
  while (i < numpackets)
    {
      packet = get_next_packet(i);
      crc_accum = update_crc (0, packet, packet_size(i));
      i++;
    }
  
  *numpacketsp = numpackets;
  *crc_accump = crc_accum;
  

  
  
  return;
}

int main (int argc, char **argv)
{
  int numpackets;
  unsigned long crc_accum;
  if (argc != 2)
    {
      printf ("Usage: crc #numpackets\n");
      exit (0);
    }
  else 
    numpackets = atoi (argv[1]);

  clock_t start_time = clock();
  d_crc32(&numpackets, &crc_accum);
  printf ("CRC completed for %d packets \n", numpackets);
  printf ("crc_accum is %u\n", (unsigned) crc_accum);

  clock_t end_time = clock();
  double time_taken_ms = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000;
  printf("use time: %.3f ms\n", time_taken_ms);
  printf("**********************************************\n");
  return 0;
}
