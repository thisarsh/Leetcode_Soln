class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     //METHOD 1:
     
        set <int> st1(nums1.begin(),nums1.end());
        set <int> st2(nums2.begin(),nums2.end());
        
        
        nums1.clear();
        
        nums2.clear();
    
        nums1.insert(nums1.end(),st1.begin(),st1.end());
        
        nums1.insert(nums1.end(),st2.begin(),st2.end());
        sort(nums1.begin(),nums1.end());
        for(int i=0; i<nums1.size()-1; i++){
            if(nums1[i]==nums1[i+1])nums2.push_back(nums1[i]);
        }

     
     return nums2;
     
     
     
     
     //METHOD 2
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        // nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());
        // nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end());
        //       nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        // unordered_map <int,int> mpp;
        // for(auto it: nums1){
        //     mpp[it]++;
        // }        
        // vector <int> hash;
        // for (auto it: mpp){
        //     if(it.second>1)hash.push_back(it.first);
        // }
        // return hash;
    }
};