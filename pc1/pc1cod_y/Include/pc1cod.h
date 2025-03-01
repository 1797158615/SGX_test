#ifndef TA_H_H
#define TA_H_H
#include "sgx_error.h"
#include "sgx_eid.h"
#include "sgx_urts.h"
sgx_enclave_id_t global_eid = 0;
# define ENCLAVE_FILENAME "enclave.signed.so"
extern sgx_enclave_id_t global_eid;
#if defined(__cplusplus)
extern "C" {
#endif
#if defined(__cplusplus)
}
#endif


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
unsigned short  ax, bx, cx, dx, si, tmp, x1a2, x1a0[16], res, i,
inter, cfc, cfd, compte;

unsigned char   cle[32];	/* les variables sont definies de facon
 * globale */

unsigned char   buff[32];

short           c;

int             c1, count;

short           d, e;



/* Function Bodies */
#endif