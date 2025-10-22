#include "../include/array_function.h"

void join_int_arrays(int *src1, size_t size_src1, int *src2, size_t size_src2, int *dest) {
    int i = 0;
    for (; i < size_src1; ++i) {
        //printf("%d %d \n", i, src1[i]);
        dest[i] = src1[i];
    }
    for (; i < (size_src1 + size_src2); ++i) {
        //printf("%d %d \n", i, src2[i-size_src1]);
        dest[i] = src2[i-size_src1];
    }
}

void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
    int m = 0;
    int n = 0;
    while ((m != size_src1) && (n != size_src2)) {
        
        if (src1[m] < src2[n]) {
            dest[m + n] = src1[m];
            m++;
        } else {
            dest[m + n] = src2[n];
            n++;
        }
    }
    while (m < size_src1) {
        dest[m + n] = src1[m];
        m++;
    }
    while (n < size_src2) {
        dest[m + n] = src2[n];
        n++;
    }
}

void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {
    *max = -9999999;
    *min = 9999999;
    for (int i = 0; i < size; i++) {
        if (src[i] > *max) {
            *max = src[i];
        }
        if (src[i] < *min) {
            *min = src[i];
        }
    }
}

