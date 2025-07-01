#include <bits/stdc++.h>
using namespace std;

// taking a global variable to count the size and will update the value when any size is increased
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

// inserting node at tail or in a blank linked list
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    // creating the node first
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        sz++;
        return; // returning if the process is done
    }

    tail->next = new_node;
    tail = new_node;
    sz++;
}

// printing the list
int print_size()
{
    return sz;
}

// printing the middle element
void print_middle_element(Node *head)
{
    int size = print_size();
    int idx = size / 2;

    for (int i = 1; i <= idx - (size % 2 == 0 ? 1 : 0); i++)
    {
        head = head->next;
    }

    if (size % 2 == 0)
    {
        cout << head->val << " " << head->next->val << endl;
    }
    else
    {
        cout << head->val;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL; // initially the tail and the head is null because the linked list is blank we have to insert data

    // taking input from the user until i get -1;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break; // will break the loop if x == -1
        }
        insert_at_tail(head, tail, x);
    }

    print_middle_element(head);
    return 0;
}