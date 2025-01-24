class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for (int i = 0; i < s.length(); i++) {
            if ((s[i] >= 'a' and s[i] <= 'z') or
                (s[i] <= 'Z' and s[i] >= 'A') or
                (s[i] <= '9') and (s[i] >= '0'))

                a += toupper(s[i]);
        }
        int n = a.length();
        for (int i = 0; i < n; i++) {
            if (a[i] != a[n - 1 - i])
                return false;
        }

        return true;
    }
};