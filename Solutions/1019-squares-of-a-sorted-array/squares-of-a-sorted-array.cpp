class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      vector <int> ans;
      int n=nums.size();
      int l,r,ind=-1;
      for(int i=0; i<n; i++){
        if(nums[i]>-1) {ind=i;break;}
      }
      if(ind==-1) ind=n-1;
      l=r=ind;
      while(l>=0 && r<n){
        if(nums[l]*nums[l]>nums[r]*nums[r]) {
            ans.push_back(nums[r]*nums[r]);
            r++;
        }
        else {
            ans.push_back(nums[l]*nums[l]);
            l--;
        }

      }
      while(r<n){
        ans.push_back(nums[r]*nums[r]);
        r++;

      }
      while(l>=0){
        ans.push_back(nums[l]*nums[l]);
        l--;

      }
      ans.erase(ans.begin(),ans.begin()+1);
      return ans;
      

      


    }
};