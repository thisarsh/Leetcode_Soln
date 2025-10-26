class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxones=0,rowno=0;
        int m=mat.size(),n=mat[0].size();
        for(int i=0; i<m; i++){
            int count1=0;
            for(int j=0; j<n;j++){
                if(mat[i][j]==1) count1++;
            }
            if(count1>maxones){
                maxones=count1;
                rowno=i;
            }
        }
        return {rowno,maxones};
        
    }
};