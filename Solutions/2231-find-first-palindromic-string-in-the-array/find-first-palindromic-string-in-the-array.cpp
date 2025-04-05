class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(auto it:words){
            string temp=it;
            reverse(it.begin(),it.end());
            if(it==temp)return it;
        }
        return "";
    }
};