class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector <int> hash(n,0);

        for (int i=0; i<n; i++){
            hash[i]=target-nums[i];
   
        }
        for(int i=0 ; i<n; i++){
          auto it=  find(hash.begin(),hash.end(),nums[i]);
          if(it!=hash.end()){
            int index=it-hash.begin();
            if(index!=i)
            return{index,i};
            
          }
          }
        
        return {};
    }
};