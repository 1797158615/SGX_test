/*
 * The Computer Language Shootout
 * http://shootout.alioth.debian.org/

 * contributed by bearophile, Jan 24 2006
 * modified by wolfjb, Feb 28 2007
 */
#include <stdio.h>
#include <time.h>

__attribute__((__annotate__("SGX")))
int ack(int x, int y) {
  if (x == 0) {
    return y + 1;
  }

  return ack(x - 1, ((y | 0) ? ack(x, y - 1) : 1));
}

__attribute__((__annotate__("SGX")))
int fib(int n) {
  if (n < 2) {
    return 1;
  }
  return fib(n - 2) + fib(n - 1);
}

__attribute__((__annotate__("SGX")))
double fibFP(double n) {
  if (n < 2.0) {
    return 1.0;
  }
  return fibFP(n - 2.0) + fibFP(n - 1.0);
}

__attribute__((__annotate__("SGX")))
int tak(int x, int y, int z) {
  if (y < x) {
    return tak(tak(x - 1, y, z), tak(y - 1, z, x), tak(z - 1, x, y));
  }
  return z;
}

__attribute__((__annotate__("SGX")))
double takFP(double x, double y, double z) {
    if (y < x)
        return takFP( takFP(x-1.0, y, z), takFP(y-1.0, z, x), takFP(z-1.0, x, y) );
    return z;
}

__attribute__((__annotate__("SGX"), __annotate__("memsize(12, 16)"), __annotate__("TAFUN")))
void d_re(int *mi, double *md) {
  int n = 6;

  *(mi) = ack(3, n+1);
 *(md) = fibFP(28.0+n);
*(mi+1) = tak(3*n, 2*n, n);
  *(mi+2) = fib(3);
  *(md+1) = takFP(3.0, 2.0, 1.0);

  
  return;
}

int main(){
  clock_t start_time = clock();
  int n = 10;
  int mi[3];
  double md[2];
  d_re(mi, md);
  printf("Ack(3,%d): %d\n", n + 1, mi[0]);
  printf("Fib(%.1f): %.1f\n", 28.0 + n, md[0]);
  printf("Tak(%d,%d,%d): %d\n", 3 * n, 2 * n, n, mi[1]);
  printf("Fib(3): %d\n", mi[2]);
  printf("Tak(3.0,2.0,1.0): %.1f\n", md[1]);

  clock_t end_time = clock();
  double time_taken_ms = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000;
  printf("use time: %.3f ms\n", time_taken_ms);
  printf("**********************************************\n");
  return 0;
}