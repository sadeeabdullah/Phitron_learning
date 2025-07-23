class MyQueue {
public:
    stack<int> st;

    MyQueue() {}

    void push(int x) 
    { 
        st.push(x); 
    }

    int pop() 
    {
        stack<int> st2;
        int val;
        while(!st.empty())
        {
            val = st.top(); // keeping stack top in it.
            st.pop(); // we will not get into the last stack
            if (st.empty() == true)
                break;
            st2.push(val);
        }

        // now returning the st2 values  to st because same process needed to be done again.
        while(!st2.empty())
        {
            st.push(st2.top());
            st2.pop();
        }
        return val;
    }

    int peek() 
    {
        stack<int> st2;
        int val;
        while(!st.empty())
        {
            val = st.top(); // keeping stack top in it.
            st.pop(); // we will not get into the last stack
            
            st2.push(val);
        }

        // now returning the st2 values  to st because same process needed to be done again.
        while(!st2.empty())
        {
            st.push(st2.top());
            st2.pop();
        }
        return val;
    }

    bool empty()
    {
        return st.empty();
    }
};
