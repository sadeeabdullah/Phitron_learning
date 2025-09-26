#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


//taking size globally
int sz = 0;
//node for singly linked list
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


// void insert at tail
void insertAtTail(Node* &head, Node* &tail, int val)
{
    // creating new node with the givenn value
    Node *newNode = new Node(val);

    /// adding it to the tail
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        sz++;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    sz++;
}
int main()
{
    fastIO();

    // initially the head and tail is null
    Node *head = NULL, *tail = NULL;

    while(true)
    {
        int x;
        cin >> x;

        if (x == -1)
            break;
        
        insertAtTail(head, tail, x);
        }
        cout << sz << nl;
    return 0;
}