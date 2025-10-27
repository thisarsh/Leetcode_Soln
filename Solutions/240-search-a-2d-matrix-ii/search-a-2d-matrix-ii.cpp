class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size()-1;
        int n=matrix[0].size()-1;
        int row=0;
        while(row<=m){
            int col=n;
            if(matrix[row][col]==target)return 1;
            else if(matrix[row][col]>target){
                if(binary_search(matrix[row].begin(),matrix[row].end(),target)) return 1;
            }
            row++;
        }
        return 0;
    }
};