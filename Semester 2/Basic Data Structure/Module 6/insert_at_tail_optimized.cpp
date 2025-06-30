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

void insert_at_tail(Node *&head, Node* &tail, int val) //TC: O(N)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode; // we have setted the tail

    // now we have to update the tail
    tail = newNode;
}

void print_linked_list(Node *head)
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
    Node *a = new Node(30);
    Node *tail = new Node(60); // we will track the tail here

    head->next = a;
    a->next = tail;

    insert_at_tail(head, tail,  100);
    insert_at_tail(head, tail,  15430);

    print_linked_list(head);

    cout << "tail - " << tail->val << endl;
    return 0;
}
