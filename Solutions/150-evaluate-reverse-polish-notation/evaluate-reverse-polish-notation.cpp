class Solution {
public:
    int evalRPN(vector<string>& tokens) {
     stack <int> st;
     int n=tokens.size();
     for(auto &it:tokens){
        int a,b;
        if(it=="+"){
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(a+b);
        }
       else if(it=="-"){
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(b-a);
        }
        else if(it=="*"){
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(a*b);
        }
       else if(it=="/"){
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(b/a);
        }
        else st.push(stoi(it));


     } 
     return st.top();
    }
};