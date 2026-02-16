// Problem: 121. Best Time to Buy and Sell Stock
// Platform: LeetCode
// Difficulty: Easy
// Approach: Track minimum price so far
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;
            } else {
                maxProfit = max(maxProfit, price - minPrice);
            }
        }

        return maxProfit;
    }
};
