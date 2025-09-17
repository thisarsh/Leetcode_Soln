class Solution {
public:
    bool rotateString(string s, string goal) {
        int n1=s.size(),n2=goal.size();
        if(n1!=n2)return 0;
        string temp="";

        for(int i=0; i<n1; i++){
            temp=s[n1-1];
            s.pop_back();
            s=(temp+=s);
            if(s==goal){return 1;} 
                
            }
            

        
        return 0;
    }
};