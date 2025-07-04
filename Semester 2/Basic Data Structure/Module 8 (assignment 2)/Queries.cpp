#include <bits/stdc++.h>
using namespace std;

int sz = 0;
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

// creating insert at head of a linked list function
void insert_at_head(Node *&head, Node *&tail, int val)
{
    // creating node to insert at the tail of the list
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        sz++;
        return;
    }
    newNode->next = head;
    head = newNode;
    sz++;
}

// creating insert at tail of a linked list function
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    // creating node to insert at the tail of the list
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        sz++;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    sz++;
}

// delete Vth postion of linked list
void delete_at_idx(Node *&head, Node *&tail, int idx)
{
    if (head == NULL || idx < 0 || idx >= sz)
    {
        return;
    }
    // delete at head
    if (idx == 0) 
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        sz--;
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < idx && tmp->next != NULL; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    if(tmp->next == NULL)
    {
        tail  = tmp;
    }
    delete deleteNode;
    sz--;
}



// print lsit for checking
void print_ls(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int checker, val;
        cin >> checker >> val;
        if (checker == 0)
        {
            insert_at_head(head, tail, val);
        }
        else if (checker == 1)
        {
            insert_at_tail(head, tail, val);
        }
        else if (checker == 2)
        {
            delete_at_idx(head, tail, val);
        }
        print_ls(head);
    }
    return 0;
}