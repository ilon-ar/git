#include <stdio.h>

int main(int argc, char** argv) {
    int array[10];
    int sum = 0;
    float sr = 0.0;
    for(int i = 0; i < 10; ++i) {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    sr = sum / 10.0;
    int sr_dr = (sr - (int)sr) * 100;
    printf("%f %d\n", sr, sr_dr);
    sr = (int)sr + (sr_dr)/100.0;
    printf("%f\n", sr);
    return 0;
}