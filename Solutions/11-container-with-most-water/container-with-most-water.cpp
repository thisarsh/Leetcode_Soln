class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(),l=0,r,volume=0,ans=0;
        r=n-1;
        while(r<n && l<r){
            int dis=r-l;
            volume=min(height[l],height[r])*dis;
            ans=max(ans,volume);
           if(height[l]>height[r] ){
            r--;
           }
           else l++;


        }
        return ans;
        
    }
};