/**
*̰���㷨�����α���bills�˵��������������
*          1.5��Ԫ������Ҫ����
*          2.10��Ԫ��ȡһ��5��Ԫ����
*          3.20��Ԫ������һ��10��Ԫ��һ��5��Ԫ������������о�������5��Ԫ
*          �������������5��Ԫ
*        ʱ��O(n),�ռ�O(1)
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