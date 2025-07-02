#include <bits/stdc++.h>
using namespace std;

//creating node

class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL; 
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    // creating node
    Node* newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

//print linked list
void print_list(Node* head)
{
    while(head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
}

//delete node
void delete_at_any_pos(Node* head, int idx)
{
    for (int i = 1; i < idx; i++)
    {
        head = head->next;
    }
    
    Node* deleteNode = head->next;
    head->next = head->next->next;
    delete deleteNode;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    while(1)
    {
        int x;
        cin >> x;
        if(x == -1)
        {
            break;
        }
        insert_at_tail(head, tail, x);
    }
    delete_at_any_pos(head, 2);
    print_list(head);
    return 0;
}