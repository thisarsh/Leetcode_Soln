class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int p1=0,p2=0,count=0,n1=g.size(),n2=s.size();
        while(p1<n1 && p2<n2){
            if(s[p2]>=g[p1]){
                count++;
                p1++;
            }
            p2++;
        }
        return count;

    }
};