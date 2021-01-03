/**
*���ⷽ����
*1.������������Ƕ��ѭ�������β鿴ÿһ������Ԫ��x�����Ԫ���Ƿ���target-x��Ԫ�ش���
*          ʱ��O(n^2)���ռ�O(1)
*2.�����ϣ����һ�����ν�����ֵ�������±����δ����ϣ���ڶ������
*          ʱ��O(n)���ռ�O(n)
*3.һ���ϣ����2�Ļ����ϸĽ��������ϣ���ͬʱ�ж��Ƿ�����֮��Ϊtarget��ֵ
*          ʱ��O(n)���ռ�O(n)
*��Ҫ�õ�vector��map����
*/
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        map<int, int> a;      //����һ����ϣ��
        vector<int> b(2, -1); //��Ž����ʹ��������������СΪ2����ʼֵ-1
        for (int i = 0; i < nums.size(); i++) {
            if (a.count(target - nums[i]) > 0) {
                b[0] = a[target - nums[i]];
                b[1] = i;
                break;
            }
            a[nums[i]] = i; //��ƥ���������ϣ��
        }
        return b;
    };
};