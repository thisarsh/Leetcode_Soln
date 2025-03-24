class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

    int n=nums.size(),ans;
    unordered_set <int> st(nums.begin(),nums.end());
    int a=1;
        while(st.find(a)!=st.end()){
             a++;
        }return a;

    }
};