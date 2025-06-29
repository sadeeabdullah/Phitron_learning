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
        this->next = NULL; // all the node next is null
    }
};

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40454);

    // let's connect these node
    head->next = a;
    a->next = b;
    b->next = c;


    //printing the value of the linked list using loop
    // while(true) // we will break the loop into the lopp when the head == NULL
    // {
    //     cout << head->val << endl;
    //     head = head->next; // on the last node the head will be null
    //     if(head == NULL)
    //     {
    //         break;
    //     }
    // }

    // at the end of the loop the head is null so if we again try to use the loop of print it we will not able to do it so we have to use temporary variable for head;

    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }

    // again if we try to print the linked list we can reset the tmp to head
    tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    return 0;
}