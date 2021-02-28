/**
*解法：
*1.排序：分别对两个字符串按ASCII码进行排序，进行比较
*        时间O(nlogn),空间O(logn)
*2.哈希表：用数组记录s字符串的字母出现次数，遍历t的同时将对应数组值减1，并判断数组值是否小于0
*        时间O(n),空间O(s)
*/
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if ( s.length() != t.length())
//             return false;
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
//         return s == t;
//     }
// };
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        vector<int> table(26, 0);
        for (auto ch: s) {
            table[ch - 'a']++;
        }
        for (auto ch: t) {
            table[ch - 'a']--;
            if (table[ch - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};