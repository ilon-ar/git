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
        printf("%.3lf ", array_sdv[i]);
    }
    printf("\n");
    return 0;
}