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
    printf("%.3lf \n", sr);
    
    return 0;
}