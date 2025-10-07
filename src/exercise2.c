#include <stdio.h>

int main(int argc, char** argv) {
    float array[10];
    int i;
    for(i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
    }
    // printf("\n\n\n");
    for (i = i -1; i >= 0; --i) {
        float x = array[i];
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
        
    }
    printf("\n");
    return 0;
}