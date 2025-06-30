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

void insert_at_tail(Node* &head, int val)
{
    // we are creating the node we need to connect or insert at the  end
    Node *newNode = new Node(val);

    //IF THE HEAD IS NULL WE CANNOT ADD VALUE BECAUSE THE IT DOES NOT FOLLOW OUR CONDITION OR WAY WE ARE TRYING TO USE WE HAVE TO HANDLE THIS WITH A ANOTHER CONDITION WE WILL SIMPLY SET THE HEAD TO THE NEW NODE
    if(head == NULL)
    {
        head = newNode;
         return;// we need to use return otherwise the whole function will be executed;
    }
    // we need go to the last node so here we will use tmp_head node
    Node *tmp_head = head;
    while (tmp_head->next != NULL) // when condition break we will be in the last node
    {
        // now we will set the tmp_head to tmp_head->next
        tmp_head = tmp_head->next;
    }

    tmp_head->next = newNode;
}

void print_linked_list(Node* head)
{
    while(head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
}

int main()
{

    // Node* head = new Node(10);
    // Node* a  = new Node(30);
    // Node* b = new Node(60);


    //making the connection
    // head->next = a;
    // a->next = b;
    Node* head = NULL;

    insert_at_tail(head, 100);
    insert_at_tail(head, 500);
    insert_at_tail(head, 700);

    print_linked_list(head);
    return 0;
}