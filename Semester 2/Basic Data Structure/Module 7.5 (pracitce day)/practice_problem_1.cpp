#include <bits/stdc++.h>
using namespace std;

//creating node for linked list
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

//creating insert_at_tail function to insert the node in newly made list
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    //creating new node with the given value that will be inserted in the linked list
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return; // doing return to end the execution of the function here
    }

    tail->next = newNode;
    tail = newNode;
}

//print_list function to print the linked list
void print_list(Node* head)
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
    // creating head and tail null as the linked list is blank at the beginning
    Node* head = NULL;
    Node* tail = NULL;

    // will take input untill we get -1 from the input
    while(1)
    {
        int x;
        cin >> x;
        if(x == -1)
        {
            break;
        }
        //insert at tail function to take input from the user
        insert_at_tail(head, tail, x);
    }

    //printing the list
    print_list(head);
    return 0;
}