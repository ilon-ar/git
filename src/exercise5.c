#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float A[10][3];
    float B[3][10];
    float pr[10][10];
    int i;
    int j;

    for (i = 0; i < 10; ++i) {
        for (j = 0; j < 3; ++j) {
            scanf("%f", &A[i][j]);
        }
    }
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 10; ++j) {
            scanf("%f", &B[i][j]);
        }
    }
    for (int p = 0; p < 10; p++) {
        for (int r = 0; r < 10; r++) {
            for (int k = 0; k < 3; k++) {
                pr[p][r] += A[p][k] * B[k][r];
            }
        }
    }
    for (int p = 0; p < 10; p++) {
        for (int r = 0; r < 10; r++) {
            printf("%.3f ", pr[p][r]);
        }
    }
    
    printf("\n");
    return 0;

}