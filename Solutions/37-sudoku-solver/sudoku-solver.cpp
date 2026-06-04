class Solution {
public:
       bool row(vector <vector <char>> & board, int i, int j, char n){
            for(int c=0; c<9; c++){
                if(n==board[i][c]) return 0;

            }
            return 1;
       }
       bool col(vector <vector <char>> & board, int i, int j,char n){
            for(int r=0; r<9; r++){
                if(n==board[r][j]) return 0;

            }
            return 1;
       }
      
       bool grid(vector <vector <char>> & board, int i, int j,char n){
        int newi=(i/3)*3;
        int newc=(j/3)*3;
            for(int r=newi; r<newi+3; r++){
                  for(int c=newc; c<newc+3; c++)
                {
                    if(board[r][c]==n)return 0;
                }

            }
            return 1;
       }
    bool f(vector <vector <char>> & board, int i, int j){
        
        if(i==9)return 1;
        if(j==9)return f(board,i+1,0);

       if(board[i][j]!='.'){
        return f(board,i,j+1);
       }
       for(int k=1; k<10; k++){
            if(row(board,i,j,k+'0') && col (board,i,j,k+'0') && grid(board,i,j,k+'0')){
                board[i][j]=k+'0';
                if( f(board,i,j+1)) return 1;
            }
        
       }

      
    board[i][j]='.';
    return 0;
        
        
    }
    void solveSudoku(vector<vector<char>>& board) {
         f(board,0,0);
        
    }
};