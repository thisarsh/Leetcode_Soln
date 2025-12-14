class Solution {
public:
    bool isPalindrome(string t) {
        int n = t.size();
        for (int i = 0; i <= n / 2; i++) {
            if (t[i] != t[n - i - 1])
                return 0;
        }
        return 1;
    }
    void f(vector<vector<string>>& ans, vector<string>& temp, string s, int ind) {

        if (ind == s.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = ind; i < s.size(); i++) {
            string curr = s.substr(ind, i-ind + 1);

            if (isPalindrome(curr)) {
                temp.push_back(curr);
                f(ans, temp, s, i + 1);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        f(ans, temp, s, 0);
        return ans;
    }
};