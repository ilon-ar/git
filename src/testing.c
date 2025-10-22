#include <stdio.h>
#include <stdlib.h>
#include "../include/array_function.h"

int main(int argc, char** argv) {
    int size = atoi(argv[1]);
    int array[size];


    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }
    
    int min;
    int max;
    int *mi = &min;
    int *ma = &max;

    get_min_and_max_from_int_array(array, size, mi, ma);    


    printf("%d %d\n", min, max);
    return 0;
}
