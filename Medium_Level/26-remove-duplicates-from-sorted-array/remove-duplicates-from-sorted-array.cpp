class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n=arr.size();
       int a=0, b=1;
       for(int i=1; i<n; i++){
      if(arr[i]>arr[a])
      {arr[a+1]=arr[i];a++;b++;}
       }return b;


    }
};