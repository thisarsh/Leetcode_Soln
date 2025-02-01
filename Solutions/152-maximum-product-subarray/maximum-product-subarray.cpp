class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p=nums[0];
      
        // if(nums.size()<2)return nums[0];
        for(int i=0; i<nums.size();i++){
            int tempp=1;
            
            
            for(int j=i; j<nums.size(); j++){
                tempp*=nums[j];
                p=max(tempp,p);
               
            }
        }
       
        
        return p;
        
    }
};