// node is class made of value and the next node pointer of linked list

#include <bits/stdc++.h>
using namespace std;

//creating node
class Node // here you can name anything you want but i am doing it as Node to make it more readable
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL; // at first we will keep it null then we will set
    }
};
int main()
{
    Node a(10), b(20), c(30);

    // a.val = 10;
    // b.val = 20;
    // c.val = 30;

    // linking the node
    a.next = &b;
    b.next = &c;
    cout << a.val << endl;
    cout << (*a.next).val << endl; // here *a.next is the dereffernced because it is the pointer of next node OUTPUT: will be the next node value or the value of b and it is 20

    // we know that if we use . (dot) enter a class of pointer we can use array sign like a.next->val; let's try out
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;
    return 0;
}