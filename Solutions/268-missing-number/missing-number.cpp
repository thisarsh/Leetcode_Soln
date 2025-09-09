class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //cxor 
        int cxortobe=0, cxor=0,i=0,n=nums.size();
        
        for(auto it: nums){
            cxor^=it;
        }
        for(i=0; i<=n;i++){
            cxortobe^=i;
        }
         return cxor^cxortobe;

        
    }
};