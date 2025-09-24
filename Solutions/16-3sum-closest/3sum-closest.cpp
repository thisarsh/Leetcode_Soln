class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size(),l=0,r=0,sum=0,closest=INT_MAX,diff=INT_MAX,mindiff=0,prevsum=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-2; i++){
            l=i+1; 
            r=n-1;
            while(r<n && l<r){
                sum=nums[i]+nums[l]+nums[r];
                if(sum==prevsum)continue;
                if(abs(target-sum)<diff){
                    mindiff=sum;
                    diff=abs(target-sum);
                }
                

                
                
                if(sum<target){
                   
                    l++;
                }
                else if(sum>target){
                    r--;
                }
                if(sum==target){
                    return sum;
                }
                prevsum=sum;
                
            }
            
            
        }
        return mindiff;
        
    }
};