class Solution {
public:
    int strStr(string h, string ne) {
        int n1=h.size(),n2=ne.size();
        if (ne==h) return 0;
        else if(n2>n1)return -1;
        else if(n2==n1 && ne!=h)return -1;

      
        string temp=h.substr(0,n2);
        for(int i=0; i<(n1-n2+1); i++){
            if(temp==ne)return i;
            temp=h.substr(i+1,n2);  
            

        }
    
        return -1;
    }
};