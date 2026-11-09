/*
 * Problem: Two Sum
 * Description: Return the indices of two distinct array elements
 * whose sum equals the given target.
 * Example: nums = [2,7,11,15], target = 9
 * Output: [0,1]
 */
 /**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *result = malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;

                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    return result;
}
