class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size(),count=0;
        for(int i=0 ; i<n; i++){
            
            if(to_string(nums[i]).size()%2==0)count++;
        }
        return count;


        
    }
};