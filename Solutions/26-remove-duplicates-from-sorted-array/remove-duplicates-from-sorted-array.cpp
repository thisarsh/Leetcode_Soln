class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

// 2p

        int l=0,r=1;
        while(l<r && r<nums.size()){
            if(nums[l]!=nums[r]){
                nums[l+1]=nums[r];
                l++;
                r++;
                
            }
            else{
                r++;
            }
        }
        return l+1;



        // set <int> st(nums.begin(),nums.end());
        // vector <int> ans(st.begin(),st.end());
        // nums=ans;
        // return nums.size();



       
    }
};

