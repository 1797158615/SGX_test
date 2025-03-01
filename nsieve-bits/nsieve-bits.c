/*
** The Great Computer Language Shootout
** http://shootout.alioth.debian.org/
** contributed by Mike Pall
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>

typedef unsigned int bits;
#define BBITS		(sizeof(bits) * 8)
#define BSIZE(x)	(((x) / 8) + sizeof(bits))
#define BMASK(x)	(1 << ((x) % BBITS))
#define BTEST(p, x)	((p)[(x) / BBITS] & BMASK(x))
#define BFLIP(p, x)	(p)[(x) / BBITS] ^= BMASK(x)

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

int main(){
  clock_t start_time = clock();
  unsigned int mn[3], mc[3];
  d_ns(mn,mc);
  for(int i = 0; i < 3; i++){
    printf("Primes up to %8d %8d\n", mn[i], mc[i]);
  }
  
  clock_t end_time = clock();
    double time_taken_ms = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000;
    printf("use time: %.3f ms\n", time_taken_ms);
    printf("**********************************************\n");
  return 0;
}