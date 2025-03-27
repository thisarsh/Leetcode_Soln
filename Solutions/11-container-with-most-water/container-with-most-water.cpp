class Solution {
public:
    int maxArea(vector<int>& height) {
        int d,v=0,l,r,n=height.size();
l=0;
r=n-1;
while(l<r){
d=r-l;
v=max(v,(d*min(height[l],height[r])));
if(height[l]<height[r])
l++;
else r--;

}
return v;
        
    }
};