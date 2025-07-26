#include <bits/stdc++.h>
using namespace std;

// creating node class for doubly linked list
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->prev = NULL;
        this->next = NULL;
        this->val = val;
    }
};

// implementing stack using linked list
class myStack
{
public:
    long long sz = 0;
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val)
    {
        // creating new Node
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

    int size()
    {
        return sz;
    }
    int top()
    {
        return tail->val;
    }

    bool empty()
    {
        return head == NULL;
    }
};
// implementing queue using linked list
class myQueue
{
public:
    long long sz = 0;
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val)
    {
        // creating new Node
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

    void pop() // time complexity O(1)
    {
        Node *del = head;
        head = head->next;
        delete del;
        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
        sz--;
    }
    int size()
    {
        return sz;
    }
    int front()
    {
        return head->val;
    }

    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    myStack st;
    myQueue q;
    int n, m;
    cin >> n >> m;

    int val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> val;
        q.push(val);
    }

    if (n != m)
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = true;
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                flag = false;
                break;
            }
            q.pop();
            st.pop();
        }
        cout << ((flag) ? "YES" : "NO") << endl;
    }

    return 0;
}