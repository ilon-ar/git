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
            printf("%.2lf ", array_sdv[i]);
        }
    printf("\n");
    return 0;

}