#include <bits/stdc++.h>
using namespace std;
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


void insert_at_tail(Node* &head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int get_size (Node *head)
{
    int sz = 0;
    while (head != NULL)
    {
        sz++;
        head = head->next;
    }
    return sz;
}

string  check_same(Node *head, Node *head_2)
{
    if (get_size(head) != get_size(head_2))
    {
        return "NO";
    }
    for (int i = 0; i < get_size(head); i++)
    {
        if (head->val != head_2->val)
        {
            return "NO";
        }
        head = head->next;
        head_2 = head_2->next;
    }
    return "YES";
}
void print_ls(Node *head)
{
    while( head != NULL)
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
    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }
    while (cin >> val && val != -1)
    {
        insert_at_tail(head_2, tail_2, val);
    }

    string isSame = check_same(head, head_2);
    cout << isSame << endl;
    return 0;
}