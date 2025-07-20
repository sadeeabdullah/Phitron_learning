#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        // creating node to insert
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        sz++;
    }

    void pop()
    {
        sz--;
        Node *del = tail;
        tail = tail->prev;
        delete del;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top()
    {
        return tail->val;
    }
    
    int size()
    {
        return sz;
    }

    bool empty()
    {
        return tail == NULL;
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

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << (!(st.empty()) ? "Not empty" : "Empty") << endl;
    return 0;
}