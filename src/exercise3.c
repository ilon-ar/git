#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float array[10];
    int i;
    for(i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
    }
    int sdvig;
    scanf("%d", &sdvig);
    float array_sdv[10];
    for (i = 0; i < 10; ++i) {
        if (i + sdvig >= 10) {
            array_sdv[i - 10 + sdvig] = array[i];
        } else if (i + sdvig < 0) {
            array_sdv[i + 10 + sdvig] = array[i];
        } else {
            array_sdv[i+sdvig] = array[i];
        }
    }

    for (i = 0; i < 10; ++i) {
        float x = array_sdv[i];
        
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
            if ((neg == 0) & (dcc < 10)) {
                printf("%d.0%d ", ccc, dcc);
            } else if ((neg == 0) & (dcc > 10)){
                printf("%d.%d ", ccc, dcc);
            }else if ((neg == 1) & (dcc < 10)) {
                printf("-%d.0%d ", ccc, dcc);
            } else if ((neg == 1) & (dcc > 10)){
                printf("-%d.%d ", ccc, dcc);
            }
        
    }
    printf("\n");
    return 0;
}