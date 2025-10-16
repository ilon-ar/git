#include <stdio.h>

int main(int argc, char** argv) {
    float array[10];
    int i;
    for(i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
    }
    // printf("\n\n\n");
    for (i = i -1; i >= 0; --i) {
        printf("%.3lf ", array[i]);
    }
    printf("\n");
    return 0;
}