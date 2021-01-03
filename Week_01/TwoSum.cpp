/**
*解题方法：
*1.暴力法：两层嵌套循环，依次查看每一个数组元素x后面的元素是否有target-x的元素存在
*          时间O(n^2)，空间O(1)
*2.两遍哈希表：第一遍依次将数组值与数组下标依次存入哈希表，第二遍查找
*          时间O(n)，空间O(n)
*3.一遍哈希表：在2的基础上改进，存入哈希表的同时判断是否有与之和为target的值
*          时间O(n)，空间O(n)
*需要用到vector与map容器
*/
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        map<int, int> a;      //创建一个哈希表
        vector<int> b(2, -1); //存放结果，使用向量容器，大小为2，初始值-1
        for (int i = 0; i < nums.size(); i++) {
            if (a.count(target - nums[i]) > 0) {
                b[0] = a[target - nums[i]];
                b[1] = i;
                break;
            }
            a[nums[i]] = i; //无匹配的则存入哈希表
        }
        return b;
    };
};