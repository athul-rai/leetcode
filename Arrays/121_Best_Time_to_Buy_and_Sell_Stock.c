/*
 * Problem: Best Time to Buy and Sell Stock
 * LeetCode: 121 | Difficulty: Easy | Topic: Array
 *
 * Description:
 * Find the maximum profit by buying a stock on one day
 * and selling it on a later day. If no profit is possible,
 * return 0.
 *
 * Example 1:
 * Input:  prices = [7,1,5,3,6,4]
 * Output: 5
 *
 * Example 2:
 * Input:  prices = [7,6,4,3,1]
 * Output: 0
 */

 
int maxProfit(int* prices, int pricesSize) {
    int minprice = prices[0];
    int maxprofit = 0;

    for(int i = 1; i < pricesSize; i++) {

        if(prices[i] < minprice) {
            minprice = prices[i];
        }

        int profit = prices[i] - minprice;

        if(profit > maxprofit) {
            maxprofit = profit;
        }
    }

    return maxprofit;
}
