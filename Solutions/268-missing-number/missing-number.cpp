class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),flag=0;
        for(int i=0;i<=n;i++){
            flag=0;
            for(int j=0; j<n; j++){
                if(i==nums[j]) {flag=1;break;}
            }
            if(flag==0)return i;
        }
        return 0;
    }
};