class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int low=0,high=m*n-1;
         int row=0,col=0;
         while(low<=high){
            int mid=(low+high)/2;
            if(matrix[mid/n][mid%n]==target)return 1;
            else if(matrix[mid/n][mid%n]<target){
                low=mid+1;
            }
            else high=mid-1;
         }
         return 0;



    //  int chigh=matrix[0].size()-1;
    //  int  rhigh=matrix.size()-1;
    //  int last=chigh;
    //  int clow=0,rlow=0;
    //  while(rlow<=rhigh){
    //     int rmid=(rlow+rhigh)/2;
    //     if(matrix[rmid][last]==target){
    //         return 1;
    //     }
    //     else if(matrix[rmid][last]<target){
    //         rlow=rmid+1;
    //     }
    //     else{
    //         if(matrix[rmid][0]<=target && matrix[rmid][last]>=target){
    //             chigh=last,clow=0;
    //             while(clow<=chigh){
    //                 int cmid=(clow+chigh)/2;
    //                 if(matrix[rmid][cmid]==target)return 1;
    //                 else if(matrix[rmid][cmid]>target){
    //                     chigh=cmid-1;
    //                 }
    //                 else{
    //                     clow=cmid+1;
    //                 }
    //             }
    //         }
    //        rhigh=rmid-1;
           
    //     }


    //  }
    //  return 0;
    }
};