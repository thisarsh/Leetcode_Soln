class Solution {
public:
    int strStr(string h, string ne) {
        int n1=h.size(),n2=ne.size();
        if (ne==h) return 0;
        else if(n2>n1)return -1;
        else if(n2==n1 && ne!=h)return -1;

        vector <string> hash((n1-n2+1),"");
        string temp=h.substr(0,n2);
        for(int i=0; i<(n1-n2+1); i++){
            hash[i]=temp;
            temp=h.substr(i+1,n2);  

        }
        for(int i=0; i<hash.size();i++){
            if(hash[i]==ne)return i;
        }
        return -1;
    }
};