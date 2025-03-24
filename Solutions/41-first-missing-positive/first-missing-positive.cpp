class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int ans;
ans=*max_element(nums.begin(),nums.end());
        unordered_set <int> st(nums.begin(),nums.end());
        for(int i=1; i<=n;i++){
            if (st.find(i) == st.end()) {
            return i;
            
}


        }return ans +1;
    }
};