#include <stdlib.h>

/*
 * Problem: Running Sum of 1D Array
 * Description: Return an array where each element is the sum
 * of all elements from index 0 to the current index.
 * Example: nums = [1,2,3,4]
 * Output: [1,3,6,10]
 */

int* runningSum(int* nums, int numsSize, int* returnSize) 
{
    int *result = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    int sum=0;
    for(int i=0;i<numsSize;i++)
    {
        result[i]=sum+nums[i];
        sum=sum+nums[i];
    }
    return result;
}