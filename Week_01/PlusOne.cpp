class Solution {
/**
*�����������1.�������һλ����С��9����ֱ�Ӽ�1���
*            2.�������һλ����9����ѭ����λ������������ȫΪ9������λǰ��һλ����λ��ֵΪ1
*     ʱ��O(n),�ռ�O(1)
*
*�õ�vector��������̬���飬���������ʵ����Ҫ����
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
        //��������ȫΪ0�����
        digits.push_back(0); //������������һ������0
        digits[0] = 1;       //������λ��Ϊ1
        return digits;
    }
};