#include "../include/advanced_array_function.h"

int max_subarray_sum(int* nums, int size) {
    int max = -9999999;
    int sum;
    for (int start = 0; start < size; start++) {
        for (int end = start; end < size; end++) {
            sum = 0;
            for (int n = start; n <= end; n++) {
                sum += nums[n];
            }
            if (max < sum) {
                max = sum;
            }
            
            
        }
    }
    if (size == 0) {
        max = 0;
    }
    return max;
}

int length_of_lis(int* nums, int numsSize) {
    int max_length = 0;
    int flag;
    for (int start = 0; start < numsSize; start++) {
        for (int end = start; end < numsSize; end++) {
            flag = 0;
            for (int i = 0; i <= (end - start - 1); i++) {
                if (nums[start + i] < nums[start + i + 1]) {
                    flag++;
                }
            }
            if ((flag == (end - start)) && ((end - start + 1) > max_length)) {
                max_length = end - start + 1;
            }
        }
    }
    return max_length;
}

int* merge(int* intervals, int intervalsSize, int* returnSize) {
    return NULL;
}

