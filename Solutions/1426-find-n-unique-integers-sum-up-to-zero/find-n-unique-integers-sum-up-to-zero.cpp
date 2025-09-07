class Solution {
public:
    vector<int> sumZero(int n) {
        vector <int> ans;
        if(n%2!=0){
            ans.push_back(0);
        }
       for(int i=-1*n/2; i<0;i++){
        ans.push_back(i);
        ans.push_back(-1*i);
        

       }
        return ans;
    }
};