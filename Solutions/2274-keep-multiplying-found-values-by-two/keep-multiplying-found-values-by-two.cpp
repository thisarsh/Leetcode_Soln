class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
        unordered_set <int> st(nums.begin(),nums.end());
        while(true){
            if(st.find(o)==st.end())return o;
            o*=2;

        }
        return o;

    }
};