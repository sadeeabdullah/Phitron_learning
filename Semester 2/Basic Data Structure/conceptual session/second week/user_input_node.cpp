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

//making the function to add or insert element at the tail
void insert_at_tail(Node* &head,Node* &tail, int val)
{
    // first we will create new node
    Node* new_node = new Node(val);

    // we will connect the memory location to the tail and move the tail on it so that we can add another value in the tail next time
    tail->next = new_node;
    tail = new_node;
}

//making function to print the linked list
void print_linkedList(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    //we will take the input untill we get -1
    
    while (1)
    {
        int x;
        cin >> x;

        if(x == -1)
        {
            break;
        }

        insert_at_tail(head,tail,x);
    }
    
    return 0;
}