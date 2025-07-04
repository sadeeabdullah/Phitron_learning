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

// function for inserting node at the tail
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    // node that will be inserted
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

// checking the size
int size_of_ls(Node *head)
{
    int sz = 0;
    while (head != NULL)
    {
        sz++;
        head = head->next;
    }
    return sz;
}

// checking if the list is same or not
string isSame(Node *head_1, Node *head_2)
{

    if (size_of_ls(head_1) != size_of_ls(head_2))
    {
        return "NO";
    }
    else
    {
        while (head_1 != NULL)
        {
            if (head_1->val != head_2->val)
            {
                return "NO";
            }
            head_1 = head_1->next;
            head_2 = head_2->next;
        }
    }
    return "YES";
}

int main()
{
    Node *head_1 = NULL;
    Node *tail_1 = NULL;
    int val, target_val;
    while (cin >> val && val != -1) // take input untill the val is not -1
    {
        insert_at_tail(head_1, tail_1, val);
    }

    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    while (cin >> val && val != -1) // take input untill the val is not -1
    {
        insert_at_tail(head_2, tail_2, val);
    }

    string is_same_ls = isSame(head_1, head_2);
    cout << is_same_ls << endl;
    return 0;
}