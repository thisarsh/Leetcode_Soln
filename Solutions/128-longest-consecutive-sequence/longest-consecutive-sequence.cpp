class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
         if(n==1)return 1;
        else if(n==0)return 0;
        set <int> st(nums.begin(),nums.end());
        // nums.clear();
        vector num(st.begin(),st.end());
        int p=0,tl=1,ml=1,prev=num[0];
       
        for(int i=1;i<num.size();i++){
            if(num[i]==prev+1 ){
                tl++;
            }
            else tl=1;
            ml=max(ml,tl);

            prev=num[i];
        }
        return ml;

    }
};