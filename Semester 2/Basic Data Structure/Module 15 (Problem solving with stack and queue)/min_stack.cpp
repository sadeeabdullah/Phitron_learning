//https://leetcode.com/problems/min-stack/

class MinStack {
public:
    stack<int> st;
    stack<int> min_st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if (min_st.empty())
        {
            min_st.push(val);
        }
        else if (min_st.top() >= val)
            min_st.push(val);
    }
    
    void pop() {
        if (min_st.top() == st.top())
        {
            min_st.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};

