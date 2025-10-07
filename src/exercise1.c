#include <stdio.h>

int main(int argc, char** argv) {
    float array[10];
    float sum = 0.0;
    float sr = 0.0;
    for(int i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
        sum += array[i];
    }
    sr = sum / 10.0;
    int nigga = 0; 
    if (sr < 0) {
        sr *= (-1);
        nigga = 1;
    } 
        int sr_dr = (sr - (int)sr) * 1000.0;

    if (sr_dr % 10 >= 5) {
        sr_dr = (sr_dr / 10) + 1;
    } else sr_dr /= 10;


    if (nigga == 1) {
        printf("-%d.%d\n", (int)sr, sr_dr);
    } else {
        printf("%d.%d\n", (int)sr, sr_dr);
    }
    
    return 0;
}