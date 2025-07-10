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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
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

void print_ls(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void reverse_list(Node *&head, Node *tmp, Node *&tail)
{
    if(tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    reverse_list(head,tmp->next,tail);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }
    reverse_list(head, head, tail);
    print_ls(head);
    return 0;
}