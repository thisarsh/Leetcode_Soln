class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
       

        for(auto &it: nums){
            if (it > n || it <=0){
                it=n+1;
            }
        }


    for(int i=0; i<n; i++){ 
        
        int el=abs(nums[i]);
        if(el==n+1) continue;      
        if(nums[el-1]>0) nums[el-1]*=-1;
    }

       for(int i=0; i<n; i++){ 
            if(nums[i]>0) return i+1;
       }
       return n+1;







      
        


    // int n=nums.size(),ans,xora=0,min=INT_MAX,max=INT_MIN;
    // for(int i=0; i<n; i++){
    //     if(nums[i]<min && nums[i]>0){
    //         min=nums[i];
    //     }
    //     if(nums[i]>max && nums[i]>0){
    //         max=nums[i];
    //     }
    //     if(nums[i]>0){
    //         xora^=nums[i];
    //     }
    // }
    
    // for(int i=min; i<=max; i++){
    //     xora^=i;
    // }
    // if(min>1){
    //     return 1;
    // }
    // if(xora==0)return max+1;
    
    // return xora;

    }
};