class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0,len=0;
        unordered_set <int> st(nums.begin(),nums.end());
        for(int i:st){
            if(!st.count(i-1)){
                int curr=i;
                len=0;
                while(st.count(curr)){
                    len++;
                    curr++;
                }
            }
            ans=max(ans,len);
        }
        return ans;
    }
};