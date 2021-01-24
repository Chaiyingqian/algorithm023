/**
*����˼·��
*1.��̬�滮��
*          ʱ��O(n),�ռ�O(1)
*2.̰���㷨��
*          ʱ��O(n),�ռ�O(1)
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