class MinStack {
public:
    stack <int> st,mn;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(mn.size()==0 || mn.top()>=val)mn.push(val);
        
    }
    
    void pop() {

        if(mn.size()>0 && mn.top()==st.top()) mn.pop();
        if(st.size()>0)st.pop();

        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        return mn.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */