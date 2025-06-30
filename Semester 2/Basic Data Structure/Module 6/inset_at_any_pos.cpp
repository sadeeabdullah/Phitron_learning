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

void insert_at_any_pos(Node* &head, int idx, int val) // time complexity O(1)
{
    // creating new node that i will insert
    Node* newNode = new Node(val);

    //using tmp node to go to the node where you want to insert
    Node* tmp = head;
    for(int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next; // connecting the node with the next node of our insertion position
    tmp->next = newNode; // connecting the node with the previous node
}

void print_linked_list(Node* head) // TC: O(N)
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

    insert_at_any_pos(head, 2, 100);
    insert_at_any_pos(head, 2, 4400);
    print_linked_list(head);

    return 0;
}