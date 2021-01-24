/**
*解题思路：
*1.动态规划：
*          时间O(n),空间O(1)
*2.贪心算法：
*          时间O(n),空间O(1)
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {   
        int ans = 0;
        int n = prices.size();
        for (int i = 1; i < n; ++i) {
            ans += max(0, prices[i] - prices[i - 1]);
        }
        return ans;
    }
};