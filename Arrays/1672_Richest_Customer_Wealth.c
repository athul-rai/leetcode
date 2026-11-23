
/*
 * LeetCode 1672 - Richest Customer Wealth
 *
 * Example 1:
 * Input: accounts = [[1,2,3],[3,2,1]]
 * Output: 6
 *
 * Example 2:
 * Input: accounts = [[1,5],[7,3],[3,5]]
 * Output: 10
 */

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize)
{
    int maxWealth = 0;

    for(int i = 0; i < accountsSize; i++)
    {
        int currentWealth = 0;

        for(int j = 0; j < accountsColSize[i]; j++)
        {
            currentWealth += accounts[i][j];
        }

        if(currentWealth > maxWealth)
        {
            maxWealth = currentWealth;
        }
    }

    return maxWealth;
}
