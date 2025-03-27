class Solution {
public:
    int maxArea(vector<int>& height) {
        int d,v=0,l,r,n=height.size();
l=0;
r=n-1;
for(int i=0;i<n;i++){
d=r-l;
v=max(v,(d*min(height[l],height[r])));
if(height[l]<height[r])
l++;
else r--;

}
return v;
        
    }
};