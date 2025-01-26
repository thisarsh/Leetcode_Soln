class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int n=arr.size();
    //    int a=0, b=1;
    //    for(int i=1; i<n; i++){
    //   if(arr[i]>arr[a])
    //   {arr[a+1]=arr[i];a++;b++;}
    //    }return b;
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    return nums.size();

    }
};