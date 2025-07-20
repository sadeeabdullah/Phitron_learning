#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    // taking vector and using it for making stack
    vector<int> v;
    // making a function to push value in stack
    void push(int val)
    {
        v.push_back(val);
    }

    // making a function to pop value from the stack
    void pop()
    {
        v.pop_back();
    }

    // making a function to get the top value
    int top()
    {
        return v.back();
    }

    // making a function to get the size of the stack
    int size()
    {
        return v.size();
    }

    // making the function to know if the stack is empty or not
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    // we are taking static object because myStack is already dynamic because we are using vector  to make it. so normaly we will not use arrow or dereffernce to access its elements
    myStack st;

    // take input of stack from user
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // show stack value
    // for (int i = 0; i < n; i++)
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    // or more perfectly
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}