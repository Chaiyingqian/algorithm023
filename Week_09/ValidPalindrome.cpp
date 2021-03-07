class Solution {
public:
    bool check(string& ss, int left, int right){
        if (left >= right) return true;
        while (left < right){
            if (ss[left] != ss[right]) return false;
            ++ left, -- right;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int l(0), r(s.size() - 1); 
        
        while (l < r){
            if (s[l] != s[r]){
                return check(s, l, r - 1) || check(s, l + 1, r);
            }
            ++ l, -- r;
        }

        return true;
    }
};