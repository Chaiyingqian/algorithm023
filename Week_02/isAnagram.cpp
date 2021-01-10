/**
*�ⷨ��
*1.���򣺷ֱ�������ַ�����ASCII��������򣬽��бȽ�
*        ʱ��O(nlogn),�ռ�O(logn)
*2.��ϣ���������¼s�ַ�������ĸ���ִ���������t��ͬʱ����Ӧ����ֵ��1�����ж�����ֵ�Ƿ�С��0
*        ʱ��O(n),�ռ�O(s)
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