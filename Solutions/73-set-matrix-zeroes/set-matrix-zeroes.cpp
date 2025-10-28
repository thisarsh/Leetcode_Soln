class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        bool zero=0,row=0,col=0;//is there 0 present -> NOOO
        if(matrix[0][0]==0)zero=1;//yes present
        for(int i=0; i<n; i++){
            
                if(matrix[0][i]==0){
                    row=1;
                    break;
                }
               
            
        }
        for(int i=0; i<m; i++){
            
                if(matrix[i][0]==0){
                    col=1;
                    break;
                }
               
            
        }
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            
            }
        }
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            
            }
        }
     
        for(int i=0; i<n; i++){
          
          if(row==1)  matrix[0][i]=0;
      
        }
       
        for(int i=0; i<m; i++){
          
          if(col==1 )  matrix[i][0]=0;
       
        }
       
    







    }
    
};