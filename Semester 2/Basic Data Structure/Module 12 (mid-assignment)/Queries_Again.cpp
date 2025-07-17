#include <bits/stdc++.h>
using namespace std;

// creating node class for linked list
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

int sz = 0;
void insert_at_head(Node *&head, Node *&tail, int val)
{
    // creating new node to insert
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    sz++;
}

void insert_at_any_pos(Node *&head, Node *&tail, int idx, int val)
{
    Node *newNode = new Node(val);

    if (idx == sz)
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        sz++;
    }
    else
    {

        Node *tmp = head;
        for (int i = 0; i < idx - 1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        newNode->prev = tmp;
        tmp->next->prev = newNode;
        tmp->next = newNode;
        sz++;
    }
}

// function for printing left to right
void print_leftToRight(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// function for printing right to left
void print_rightToLeft(Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
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
        int x, v;
        cin >> x >> v;
        if (x < 0 || x > sz)
        {
            cout << "Invalid" << endl;
        }
        else if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_leftToRight(head);
            print_rightToLeft(tail);
        }
        else
        {
            insert_at_any_pos(head, tail, x, v);
            print_leftToRight(head);
            print_rightToLeft(tail);
        }
    }

    return 0;
}