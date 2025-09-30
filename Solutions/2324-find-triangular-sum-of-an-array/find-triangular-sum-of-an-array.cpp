class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size(),ans=0;
        int temp=n;
        vector <vector<int>> arr;
        arr.push_back(nums);

        for(int i=1; i<n; i++){
            vector <int> vec;

            for(int j=0; j<n-i; j++){
                    vec.push_back((arr[i-1][j]+arr[i-1][j+1])%10);

            }
            arr.push_back(vec);

        }
        return arr[n-1][0];
        

    }
};
