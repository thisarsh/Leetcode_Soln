class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size(),ans=0,sum=0;
        unordered_map <int,int> mpp;
        mpp[0]=-1;
        for(int i=0; i<n; i++){ 
            if(nums[i]==0)sum--;
            else sum++;
           

            
            
            auto it=mpp.find(sum);
            if(it!=mpp.end()){
                ans=max(ans,i-(it->second));
                

            }             
           else mpp[sum]=i;
           

        }
        return ans;
        

        
        
    }
};