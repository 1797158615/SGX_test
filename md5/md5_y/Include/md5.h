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

#include <string.h>
#include <time.h>


#ifndef uint8
#define uint8  unsigned char
#endif

#ifndef uint32
#define uint32 unsigned long int
#endif

typedef struct
{
    uint32 total[2];
    uint32 state[4];
    uint8 buffer[64];
}
md5_context;

#define GET_UINT32(n,b,i)                       \
{                                               \
    (n) = ( (uint32) (b)[(i)    ]       )       \
        | ( (uint32) (b)[(i) + 1] <<  8 )       \
        | ( (uint32) (b)[(i) + 2] << 16 )       \
        | ( (uint32) (b)[(i) + 3] << 24 );      \
}

#define PUT_UINT32(n,b,i)                       \
{                                               \
    (b)[(i)    ] = (uint8) ( (n)       );       \
    (b)[(i) + 1] = (uint8) ( (n) >>  8 );       \
    (b)[(i) + 2] = (uint8) ( (n) >> 16 );       \
    (b)[(i) + 3] = (uint8) ( (n) >> 24 );       \
}

/* Function Bodies */
#endif