#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

bool palindrome_check(Node *&head, Node *&tail)
{
    bool IsPalindrome = true;
    for (Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
    {
        if(i->val != j->val)
        {
            IsPalindrome = false;
            break;
        }
    }
    return IsPalindrome;
}

void print_ls(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }
    cout << ((palindrome_check(head,tail)) ? "YES" : "NO") << endl;
    return 0;
}