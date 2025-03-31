class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
    int xortobe=0,xorfound=0;

    for(int i=0;i<=n;i++){
        xortobe^=i;
    }
    for(auto it:nums){
        xortobe^=it;
    }
    return xortobe;





    //    int sumfound=0,sumtobe=0;
    //    for(auto it:nums){
    //     sumfound+=it;
    //    }
    //    sumtobe=n*(n+1)/2;
    //    return sumtobe-sumfound;

    }
};