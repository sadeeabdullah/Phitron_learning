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

//delete at head MAKE SURE YOU ALSO UPDATE TAIL WHEN THE LIST HAS ONLY ONE NODE
void delete_at_head (Node *&head, Node *&tail)
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

    delete_at_head (head,tail);
    delete_at_head (head,tail);
    print_forward(head);
    
    return 0;
}