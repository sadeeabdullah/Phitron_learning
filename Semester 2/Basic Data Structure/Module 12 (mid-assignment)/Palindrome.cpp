#include <bits/stdc++.h>
using namespace std;

//creating node class for linked list
class Node
{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL; 
        this->prev = NULL; 
    }
};

void insert_at_list(Node *&head, Node *&tail, int val)
{
    // creating new node to insert
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

string isPalindrome(Node *head, Node *tail)
{
    for (Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
    {
        if(i->val != j->val)
        {
            return "NO";
        }
    }
    return "YES";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while(cin >> val && val != -1)
    {
        insert_at_list(head, tail, val);
    }

    cout << isPalindrome(head, tail) << endl;
    
    return 0;
}