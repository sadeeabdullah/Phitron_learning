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

// function to  search value position
int search_value(Node *head, int target_value)
{
    int idx = 0;
    while (head != NULL)
    {
        if (head->val == target_value)
            return idx;
        head = head->next;
        idx++;
    }
    return -1;
}


int main()
{
    
    int tc;
    cin >> tc;
    while (tc--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val, target_val;
        while (cin >> val && val != -1) // take input untill the val is not -1
        {
            insert_at_tail(head, tail, val);
        }
        cin >> target_val;
        int idx_target = search_value(head,target_val);
        cout << idx_target << endl;
    }
    return 0;
}