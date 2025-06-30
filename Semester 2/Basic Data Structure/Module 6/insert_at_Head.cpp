#include <bits/stdc++.h>
using namespace std;

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

void insert_at_head(Node* &head, int val)
{
    // creating new node that i will insert
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void print_linked_list(Node* head)
{
    
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_head(head,100);
    insert_at_head(head,500);
    print_linked_list(head);

    return 0;
}