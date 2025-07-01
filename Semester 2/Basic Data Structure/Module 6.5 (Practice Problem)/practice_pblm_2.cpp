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

// inserting node at tail or in a blank linked list
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    // creating the node first
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return; // returning if the process is done
    }

    tail->next = new_node;
    tail = new_node;
}

// taking a flag to check the list have any duplicate value or not
int hasDuplicate = 0;

// printing the list
void print_list(Node *head)
{
    // taking freq array
    vector<int> freq(101); // assuming the list size is 100

    while (head != NULL)
    {
        // we will count this values repeatation using freq array
        freq[head->val]++;
        head = head->next;
    }

    // printing the freq array for test
    for (int i = 0; i < 101; i++)
    {
        if (freq[i] > 1)
        {
            hasDuplicate = 1;
            break;
        }
    }

    cout << ((hasDuplicate == 1) ? "YES" : "NO") << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL; // initially the tail and the head is null because the linked list is blank we have to insert data

    // taking input from the user until i get -1;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break; // will break the loop if x == -1
        }
        insert_at_tail(head, tail, x);
    }

    print_list(head);

    return 0;
}