class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        set <int> st(nums.begin(),nums.end());
       
         

        for(auto it:st){
            nums[k]=it;
            k++;
        }         return st.size();



    }
};