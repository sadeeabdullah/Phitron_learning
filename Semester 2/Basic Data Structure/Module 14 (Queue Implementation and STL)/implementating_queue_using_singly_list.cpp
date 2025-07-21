#include <bits/stdc++.h>
using namespace std;

// taking singly linked list class (node object)
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val) // time complexity O(1)
    {
        sz++;
        // creating new node to insert
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop() // time complexity O(1)
    {
        Node *del = head;
        head = head->next;
        delete del;
        if (head == NULL)
        {
            tail = NULL;
        }
        sz--;
    }

    int size() // time complexity O(1)
    {
        return sz;
    }

    int front()
    {
        return head->val;
    }

    int back()
    {
        return tail->val;
    }

    bool empty()
    {
        return head == NULL;
    }
};
int main()
{

    return 0;
}