/**
*贪心算法：依次遍历bills账单，分三种情况：
*          1.5美元，则不需要找零
*          2.10美元，取一张5美元找零
*          3.20美元，先找一张10美元和一张5美元，这种情况不行就找三张5美元
*          尽可能留更多的5美元
*        时间O(n),空间O(1)
*/
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        for (auto& bill: bills) {
            if (bill == 5) {
                five++;
            } else if (bill == 10) {
                if (five == 0) {
                    return false;
                }
                five--;
                ten++;
            } else {
                if (five > 0 && ten > 0) {
                    five--;
                    ten--;
                } else if (five >= 3) {
                    five -= 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    } 
};