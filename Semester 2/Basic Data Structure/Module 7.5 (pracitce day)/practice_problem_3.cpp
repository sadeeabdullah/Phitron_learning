#include <bits/stdc++.h>
using namespace std;

// creating node for linked list
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

// creating insert_at_tail1 function to insert the node in newly made list
void insert_at_tail(Node *&head, Node *&tail1, int val)
{
    // creating new node with the given value that will be inserted in the linked list
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail1 = newNode;
        return; // doing return to end the execution of the function here
    }

    tail1->next = newNode;
    tail1 = newNode;
}

// print_list function to print the linked list
void print_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int get_maximum(Node *head)
{
    // lets think INT_MIN is the maximum value
    int maximum = INT_MIN;
    while (head != NULL)
    {
        if(maximum < head->val)
        {
            maximum = head->val;
        }
        head = head->next;
    }
    return maximum;
}
int main()
{
    // creating head and tail null as the linked list is blank at the beginning
    Node *head1 = NULL;
    Node *tail1 = NULL;


    // will take input untill we get -1 from the input
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        // insert at tail function to take input from the user
        insert_at_tail(head1, tail1, x);
    }

    int getMaximum = get_maximum(head1);
    cout << getMaximum << endl;
    return 0;
}