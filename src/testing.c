#include <stdio.h>
#include <stdlib.h>
#include "../include/array_function.h"

int main(int argc, char** argv) {
    int size1 = atoi(argv[1]);
    int size2 = atoi(argv[2]);
    int array1[size1];
    int array2[size2];

    for (int i = 0; i < size1; ++i) {
        scanf("%d", &array1[i]);
    }
   
    for (int i = 0; i < size2; ++i) {
        scanf("%d", &array2[i]);
    }
    
    int arrayk[size1 + size2];
    
    
    join_and_sort_int_arrays(array1, size1, array2, size2, arrayk);


    for (int i = 0; i < size1 + size2; ++i) {
        printf("%d ", arrayk[i]);
    }
    printf("\n");
    return 0;
}
