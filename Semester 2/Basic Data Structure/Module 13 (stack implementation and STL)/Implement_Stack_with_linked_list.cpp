#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
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

    void insert_at_tail(head, tail, )

}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    //creating node to insert
    Node *newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

}
int main()
{
    
    return 0;
}