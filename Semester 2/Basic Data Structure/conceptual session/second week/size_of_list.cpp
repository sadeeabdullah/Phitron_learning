#include <bits/stdc++.h>
using namespace std;

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
    Node* new_node = new Node(val);

    if(head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    tail = new_node;
}

void print_linkedList(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

void size_of_list(Node* head)
{
    int count = 0;
    Node* tmp = head;
    while(tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    cout << count << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while (1)
    {
        int x;
        cin >> x;

        if(x == -1)
        {
            break;
        }

        insert_at_tail(head, tail, x);
    }

    print_linkedList(head);
    size_of_list(head);
    return 0;
}
