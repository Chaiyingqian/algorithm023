/**
 * 解法：
 * 1.暴力法：同斐波那契数列。
 *           时间O(2^n)，空间O(n)
 * 2.记忆化搜索：暴力解法基础上增加数组记录值，减少重复计算。
 *           时间O(n)，空间O(n)
 * 3.动态规划：增加一个dp数组，从3到n依次计算
 *           时间O(n)，空间O(n)
 * 4.对3进行空间优化：使用两个变量
 *           时间O(n)，空间O(1)
 */
class Solution {
public:
    int climbStairs(int n) {
//此处为解法4
        int p=0,q=0,r=1;
        for ( int i=1;i<=n;i++) {
            p=q;
            q=r;
            r=p+q;           
        }
        return r;
    }
};