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

// printing forward
void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
// printing backward
void print_backward(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

// insert at tail function
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

// insert at any pos
void insert_at_any_pos(Node *&head, int idx, int val)
{
    // creating new node to insert
    Node *tmp = head;
    Node *newNode = new Node(val);
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    newNode->prev = tmp;
    tmp->next = newNode;
    
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

    insert_at_tail(head, tail, 1200);
    insert_at_tail(head, tail, 1500);

    insert_at_any_pos(head, 2, 500);
    insert_at_any_pos(head, 1, 100);
    print_forward(head);
    return 0;
}