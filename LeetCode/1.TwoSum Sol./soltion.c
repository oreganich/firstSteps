#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(const int* nums,const  int numsSize, const int target, int* returnSize) {

    int* result = malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++ ){

        for (int j = i + 1; j < numsSize; j++){

            int add = nums[i] + nums[j];

            if ( add == target) {
            result[0] = i;
            result[1] = j;
            * returnSize = 2;
            return result;
            }

        }

    }
    *returnSize = 0;
    return NULL;
}
