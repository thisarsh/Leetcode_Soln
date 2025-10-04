class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(),ans=0;
        int i=0,j=n-1;
        while(i<j && j<n){
             ans=max(ans,min(height[i],height[j])*(j-i));
            if(height[i]>height[j]){
                j--;
            }
            else i++;

        }
        return ans;
    }
};