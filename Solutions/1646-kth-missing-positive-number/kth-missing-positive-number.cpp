class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int n=nums.size(),count=1;
        // unordered_set <int> st (nums.begin(),nums.end());
        vector <int> hash(2001,0);
        for(auto it:nums){
         hash[it]=1;
        }
        for(int i=1; i<=2000; i++){
            if(hash[i]==0)k--;
            if(k==0)return i;
        }
        return 0;
       
    }
};