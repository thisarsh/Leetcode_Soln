class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
      int count=1,i=0,j=0,ans=0,count2=0;
      int n=nums.size(),pl=0;
      vector <int> hash;
      if(k==1)return 1;
      for(int i=1; i<n; i++){
        if(nums[i-1]<nums[i]){
            count++;
            if(count==k && hash.size()!=0 && (i-k)==hash.back())return 1;
            if(count==2*k)return 1;
        }
        else{
           if(count>=k) hash.push_back(i-1);
           count=1;

        }


      }

        

    return 0;
     
    }
};