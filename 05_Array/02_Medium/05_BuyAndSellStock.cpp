#include <bits/stdc++.h>
using namespace std;

/*  
    Problem: Best Time to Buy and Sell Stock (LeetCode 121)
    Approach: Greedy (Track minimum price so far)
    Time Complexity : O(n)
    Space Complexity : O(1)
*/

int maxProfit(vector<int>& prices) {
    int mini = prices[0], profit = 0;

    for (int i = 0; i < prices.size(); i++) {
        int cost = prices[i] - mini;
        profit = max(cost, profit);
        mini = min(mini, prices[i]);
    }
    return profit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << maxProfit(prices);

    return 0;
}
