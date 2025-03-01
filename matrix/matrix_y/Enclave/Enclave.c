#include "../Include/matrix.h"
#include "Enclave.h"
#include "Enclave_t.h"


__attribute__((__annotate__("SGX")))
int **mkmatrix(int rows, int cols) {
    int i, j, count = 1;
    int **m = (int **) malloc(rows * sizeof(int *));
    for (i=0; i<rows; i++) {
	m[i] = (int *) malloc(cols * sizeof(int));
	for (j=0; j<cols; j++) {
	    m[i][j] = count++;
	}
    }
    return(m);
}

__attribute__((__annotate__("SGX")))
void zeromatrix(int rows, int cols, int **m) {
    int i, j;
    for (i=0; i<rows; i++)
	for (j=0; j<cols; j++)
	    m[i][j] = 0;
}

__attribute__((__annotate__("SGX")))
void freematrix(int rows, int **m) {
    while (--rows > -1) { free(m[rows]); }
    free(m);
}

__attribute__((__annotate__("SGX")))
int **mmult(int rows, int cols, int **m1, int **m2, int **m3) {
    int i, j, k, val;
    for (i=0; i<rows; i++) {
	for (j=0; j<cols; j++) {
	    val = 0;
	    for (k=0; k<cols; k++) {
		val += m1[i][k] * m2[k][j];
	    }
	    m3[i][j] = val;
	}
    }
    return(m3);
}

__attribute__((__annotate__("SGX"), __annotate__("memsize(16, 4)"), __annotate__("TAFUN")))
void d_ma(int *mv, int *n) {


    int i;
	
    int **m1 = mkmatrix(SIZE, SIZE);
    int **m2 = mkmatrix(SIZE, SIZE);
    int **mm = mkmatrix(SIZE, SIZE);

    for (i=0; i<*n; i++) {
	mm = mmult(SIZE, SIZE, m1, m2, mm);
    }

    *(mv) = mm[0][0];
    *(mv+1) = mm[2][3];
    *(mv+2) = mm[3][2];
    *(mv+3) = mm[4][4];

    freematrix(SIZE, m1);
    freematrix(SIZE, m2);
    freematrix(SIZE, mm);

    
    return;
}