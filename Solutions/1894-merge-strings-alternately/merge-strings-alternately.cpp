class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string s="";
        int w2l=w2.size(),w1l=w1.size();
        int ml=max(w1l,w2l);
        for(int i=0;i<ml;i++){
            if(i<w1l)
            s+=w1[i];
            if(i<w2l)
            s+=w2[i];
        } return s;
    }
};