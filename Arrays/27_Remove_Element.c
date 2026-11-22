/*
 * LeetCode 27 - Remove Element
 * Difficulty: Easy
 * Topic: Arrays, Two Pointers
 * 
 * Approach:
 * Remove all occurrences of val in-place
 * and return the number of remaining elements.
 *
 * Example 1:
 * Input: nums = [3,2,2,3], val = 3
 * Output: 2
 *
 * Example 2:
 * Input: nums = [0,1,2,2,3,0,4,2], val = 2
 * Output: 5
 */

 int removeElement(int* nums, int numsSize, int val) {
    int k=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=val)
        {
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
}