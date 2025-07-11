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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        sz++;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    sz++;
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
void print_forward(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void insert_at_any_position(Node *head, Node *tail, int idx, int val)
{
    Node *newNode = new Node(val);
    if (idx == 0)
    {
        head == newNode;
        tail = newNode;
        sz++;
        return;
    }
    for (int i = 1; i < idx; i++)
    {
        head = head->next;
    }
    head->next->prev = newNode;
    newNode->next = head->next;
    head->next = newNode;
    newNode->prev = head;
    sz++;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int x, y;
    cin >> x >> y;

    if (x > sz)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        insert_at_any_position(head, tail, x, y);
    }
    print_forward(head);
    print_backward(tail);
    return 0;
}