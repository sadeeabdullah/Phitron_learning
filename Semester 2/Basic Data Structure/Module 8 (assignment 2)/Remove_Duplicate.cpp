#include <bits/stdc++.h>
using namespace std;

// creating node
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

// insert at tail
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    // creating node to insert
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

// sort the l ist
void remove_duplicates(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        Node *j = i;
        while (j->next != NULL)
        {
            if (i->val == j->next->val)
            {
                Node *duplicate = j->next;
                j->next = j->next->next;
                delete duplicate;
            }
            else
            {
                j = j->next;
            }
        }
    }
}


// print list
void print_ls(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }
    remove_duplicates(head);
    print_ls(head);
    return 0;
}