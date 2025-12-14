class Solution {
public:

    vector <vector <int>> directions={{0,1},{0,-1},{1,0},{-1,0}};
    bool f(vector<vector<char>>& board, string word, int i,int j,int idx,int m,int n)
    {
        if(idx==word.size())return true;
        if(i>=m || i<0 || j>=n || j<0 || board[i][j]=='0' || board[i][j]!=word[idx]){
            return false;
        }


        char temp=board[i][j];
        board[i][j]='0';

        for(auto &it: directions){
            int new_i=i+it[0];
            int new_j=j+it[1];
           if(f(board,word,new_i,new_j,idx+1,m,n)){
            return true;
           }

        }
        board[i][j]=temp;
        
   
        return 0;

    }

    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j]==word[0])
                 if(f(board,word,i,j,0,m,n)) return true;
            }
        }
        return  0;
        
    }
};