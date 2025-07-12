#include <bits/stdc++.h>
using namespace std;

int sz = 0;
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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    // if (tail == NULL)
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        sz++;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
    sz++;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        sz++;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    sz++;
}

void insert_at_any_position(Node *&head, Node *&tail, int idx, int val)
{
    Node *newNode = new Node(val);

    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    tmp->next->prev = newNode;
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
    sz++;
}

void print_forward(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

        if (idx < 0 || idx > sz)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (idx == sz)
        {
            insert_at_tail(head, tail, val);
        }
        else if (idx == 0)
        {
            insert_at_head(head, tail, val);
        }
        else
        {
            insert_at_any_position(head, tail, idx, val);
        }

        print_forward(head);
        print_backward(tail);
    }

    return 0;
}