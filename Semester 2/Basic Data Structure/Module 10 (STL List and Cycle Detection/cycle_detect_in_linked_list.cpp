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

void print_ls(Node *head)
{
    while(head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    Node *slow = head;
    Node *fast = head;

    bool detected = false;
    while(fast->next != NULL && fast != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            detected = true;
            break;
        }
    }
    cout << ((detected) ? "cycle detected" : "No cycle detected") << endl;
    return 0;
}