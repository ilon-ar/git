#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float array[10];
    int i;
    for(i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
    }
    float zamena = atof(argv[1]);
    int pos = atoi(argv[2]);
    float array_sdv[10];
    for (i = 0; i < 10; ++i) {
        if (i < pos) {
            array_sdv[i] = array[i];
        } else if (i == pos) {
            array_sdv[i] = zamena;
        } else {
            array_sdv[i] = array[i - 1];
        }
        }
    
        for (i = 0; i < 10; ++i) {
        float x = array_sdv[i];
        if ((int)x == x) {
            printf("%d ", (int)(x));
        } else {
            char neg = 0;
            if (x < 0) {
                neg = 1;
                x *= (-1);
            }
            int ccc = (int)x;
            int dcc = (x - ccc) * 1000;
            if (dcc % 10 >= 5){
                dcc = (dcc / 10) + 1;
            } else dcc /= 10;
            if (dcc % 10 == 0) {
                dcc /= 10;
            }

            if (neg == 0) {
                printf("%d.%d ", ccc, dcc);
            }else if (neg == 1) {
                printf("-%d.%d ", ccc, dcc);
            }
        }

    }
    printf("\n");
    return 0;

}