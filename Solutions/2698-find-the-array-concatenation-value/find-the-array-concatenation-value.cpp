class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long int ans=0;
        string temp="";
        int n=nums.size();
        for(int i=0; i<n/2;i++){
            temp=to_string(nums[i])+to_string(nums[n-1-i]);
            ans+=stoll(temp);

        }
        if(n%2==0)
        return ans;
        else return nums[(n/2)]+ans;
    }
};