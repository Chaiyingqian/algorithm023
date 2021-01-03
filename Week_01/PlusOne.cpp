class Solution {
/**
*分两种情况：1.数组最后一位数字小于9，则直接加1输出
*            2.数组最后一位等于9，则循环进位；若数组数字全为9，则首位前加一位，首位赋值为1
*     时间O(n),空间O(1)
*
*用到vector容器，动态数组，其基本函数实现需要掌握
*/
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = (int)digits.size() - 1; i >= 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;
            }
            else {
                digits[i]++;
                return digits;
            }
        }
        //数组数字全为0的情况
        digits.push_back(0); //在数组最后添加一个数据0
        digits[0] = 1;       //数组首位改为1
        return digits;
    }
};