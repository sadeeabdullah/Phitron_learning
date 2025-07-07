#include <bits/stdc++.h>
using namespace std;

// creating node for dubly linked list
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

//printing forward
void print_forward(Node *head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
//printing backward
void print_backward(Node *tail)
{
    Node *tmp = tail;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

// insert at tail function
void insert_at_tail (Node *&tail)
{
    Node *newNode = new Node(500);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(30);
    Node *tail = new Node(50);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    insert_at_tail(tail);
    print_forward(head);
    return 0;
}