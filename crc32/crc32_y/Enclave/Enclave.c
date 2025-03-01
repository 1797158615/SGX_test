#include "../Include/crc32.h"
#include "Enclave.h"
#include "Enclave_t.h"


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

__attribute__((__annotate__("SGX"), __annotate__("memsize(4, 8)"), __annotate__("TAFUN")))
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
