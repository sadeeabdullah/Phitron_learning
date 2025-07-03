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

int get_size(Node* head)
{
    int sz = 0;
    while (head->next != NULL)
    {   sz ++;
        head = head->next;
    }
    return sz;
}
int main()
{
    // creating head and tail null as the linked list is blank at the beginning
    Node *head1 = NULL;
    Node *tail1 = NULL;

    //creating head for another linked list
    Node *head2 = NULL;
    Node *tail2 = NULL;

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
        insert_at_tail(head2, tail2, x);
    }

    int sz1 = get_size(head1);
    int sz2 = get_size(head2);
    cout << ((sz1 == sz2) ? "YES" : "NO") << endl;
    return 0;
}