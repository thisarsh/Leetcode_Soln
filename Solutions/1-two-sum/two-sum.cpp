class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n=nums.size();
        unordered_map <int,int> mpp;
        for(int i=0; i<n; i++){
            mpp[target-nums[i]]=i;
        }
        for(int i=0; i<n; i++){
          
          auto it=mpp.find(nums[i]);
          if(it!=mpp.end() && it->second !=i)
               { int index=it->second;
                
                return {i,index};
            }
        }








        
        // vector <int> hash(n,0);

        // for (int i=0; i<n; i++){
        //     hash[i]=target-nums[i];
   
        // }
        // for(int i=0 ; i<n; i++){
        //   auto it=  find(hash.begin(),hash.end(),nums[i]);
        //   if(it!=hash.end()){
        //     int index=it-hash.begin();
        //     if(index!=i)
        //     return{index,i};
            
        //   }
        //   }
        
        return {};
    }
};