#include "../Include/nsieve-bits.h"
#include "Enclave.h"
#include "Enclave_t.h"


__attribute__((__annotate__("SGX"), __annotate__("memsize(12, 12)"), __annotate__("TAFUN")))
void d_ns(unsigned int *mn, unsigned int *mc)
{
  
  unsigned int m, sz = 10000 << 12;
  bits *primes = (bits *)malloc(BSIZE(sz));
  if (!primes) return;
  for (m = 0; m <= 2; m++) {
    unsigned int i, j, count = 0, n = sz >> m;
    memset(primes, 0xff, BSIZE(n));
    for (i = 2; i <= n; i++)
      if (BTEST(primes, i)) {
        count++;
        for (j = i + i; j <= n; j += i)
          if (BTEST(primes, j)) BFLIP(primes, j);
      }
    *(mn+m) = n;
    *(mc+m) = count;
    
  }
  free(primes);
  
  return;
}

