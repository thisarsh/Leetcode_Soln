class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size(),gmax=nums[0],tempsum=nums[0];
       for(int i=1; i<n; i++){
            if(nums[i]>nums[i-1])tempsum+=nums[i];
            else tempsum=nums[i];
            gmax=max(gmax,tempsum);

       } return gmax;



//             int prev=-1;
//             for(int j=i; j<n; j++){
//                 if(nums[j]<=prev)break;

//                 tempmax+=nums[j];
//                 gmax=max(gmax,tempmax);
//                 prev=nums[j];
                
//             }
//         }
// return gmax;
// class Solution {
// public:
//     int maxAscendingSum(vector<int>& nums) {
//         int gmax = nums[0], tempmax = nums[0];

//         for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] > nums[i - 1]) { 
//                 tempmax += nums[i];  // Continue the current increasing subarray
//             } else {
//                 tempmax = nums[i];  // Start a new subarray
//             }
//             gmax = max(gmax, tempmax);
//         }

//         return gmax;
    }
};

        
