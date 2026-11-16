/*
LeetCode 1486: XOR Operation in an Array

Description:
You are given an integer n and an integer start.

Define an array nums where:
nums[i] = start + 2 * i

Return the bitwise XOR of all elements of nums.

Example 1:
Input: n = 5, start = 0
Output: 8

Explanation:
nums = [0, 2, 4, 6, 8]
0 ^ 2 ^ 4 ^ 6 ^ 8 = 8

Example 2:
Input: n = 4, start = 3
Output: 8

Explanation:
nums = [3, 5, 7, 9]
3 ^ 5 ^ 7 ^ 9 = 8

Constraints:
1 <= n <= 1000
0 <= start <= 1000
*/

int xorOperation(int n, int start)
{
    int nums[n];

    for(int i = 0; i < n; i++)
    {
        nums[i] = start + 2 * i;
    }

    int res = 0;

    for(int i = 0; i < n; i++)
    {
        res = res ^ nums[i];
    }

    return res;
}
