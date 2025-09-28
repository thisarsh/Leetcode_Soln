class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),psum=0,count=0; 
        unordered_map <int,int> mpp;
        mpp[0]=1;
        for(auto it:nums){
            psum+=it;
        
            if(mpp.find(psum-k)!=mpp.end()){
                count+=mpp[psum-k];
            }
                mpp[psum]++;
            
        }
        



        // for(int i=0; i<n; i++){
        //     sum=0;
        //     for(int j=i; j<n; j++){
        //         sum+=nums[j];
        //         if(sum==k)count++;
        //     }

        // }
        return count;
        
    }
};