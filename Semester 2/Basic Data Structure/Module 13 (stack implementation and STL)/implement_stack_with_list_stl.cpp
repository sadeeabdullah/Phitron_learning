#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    // taking list to make a stack
    list<int> l;
    // making a function to push value in stack
    void push(int val)
    {
        l.push_back(val);
    }

    // making a function to pop value from the stack
    void pop()
    {
        l.pop_back();
    }

    // making a function to get the top value
    int top()
    {
        return l.back();
    }

    // making a function to get the size of the stack
    int size()
    {
        return l.size();
    }

    // making the function to know if the stack is empty or not
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    //we are taking static object because myStack is already dynamic because we are using vector  to make it. so normaly we will not use arrow or dereffernce to access its elements
    myStack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;

    st.pop();

    cout << st.top() << endl;

    // But here is an corner case if sometme the stack become null or blank how can we access the top element or do pop operation so always before doing these operation we have to check if the stack is empty or not

    // if(st.empty() == false)
    if(!st.empty())
    st.pop();
    
    if(!st.empty())
        cout << st.top() << endl;
    return 0;
}