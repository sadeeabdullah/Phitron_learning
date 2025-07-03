// reverse print list using recursion
#include <bits/stdc++.h>
using namespace std;

// to count the size
int sz = 0;
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
        sz++;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    sz++;
}

// print_list function to print the linked list
void print_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// insert at any position
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    sz++;
}
// insert at any position in linked list
void insert_at_any_pos(Node *&head, int idx, int val)
{
    Node *newNode = new Node(val);

    Node *tmp_head = head;
    for (int i = 1; i < idx; i++)
    {
        tmp_head = tmp_head->next;
    }

    newNode->next = tmp_head->next;
    tmp_head->next = newNode;
    sz++;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insert_at_tail(head, tail, x);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

        if (idx > sz)
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
            insert_at_head(head, val);
        }
        else
        {
            insert_at_any_pos(head, idx, val);
        }
        print_list(head);
    }
    return 0;
}