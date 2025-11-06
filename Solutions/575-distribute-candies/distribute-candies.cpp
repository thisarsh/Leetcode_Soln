class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int sum=1,n=candyType.size();

       unordered_set <int> st(candyType.begin(),candyType.end());
       sum=st.size();
        if(sum>=n/2)return n/2;
        return sum;
    }
};