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

// creating insert at tail of a linked list function
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    // creating node to insert at the tail of the list
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


//get minimum value from the list
int get_min(Node* head)
{
    int min = INT_MAX;
    while(head != NULL)
    {
        if (min > head->val)
            min = head->val;
        head = head->next;
    }
    return min;
}

//get maximum value from the list
int get_max(Node* head)
{
    int max = INT_MIN;
    while(head != NULL)
    {
        if (max < head->val)
            max = head->val;
        head = head->next;
    }
    return max;
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

    cout << get_max(head) - get_min(head) << endl;
    return 0;
}