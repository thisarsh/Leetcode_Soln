class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());
        nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end());
              nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        unordered_map <int,int> mpp;
        for(auto it: nums1){
            mpp[it]++;
        }        
        vector <int> hash;
        for (auto it: mpp){
            if(it.second>1)hash.push_back(it.first);
        }
        return hash;
    }
};