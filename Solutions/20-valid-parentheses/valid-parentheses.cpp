class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(auto it:s){
            if(it=='(' || it=='[' || it=='{') st.push(it);
            else if(st.size()==0)return 0;
            else if( st.top ()=='(' && it!=')') return 0;
            else if( st.top ()=='[' && it!=']') return 0;
            else if( st.top ()=='{' && it!='}') return 0;
            else st.pop();
        }
        if(st.size())return 0;
        return 1;
        
    }
};