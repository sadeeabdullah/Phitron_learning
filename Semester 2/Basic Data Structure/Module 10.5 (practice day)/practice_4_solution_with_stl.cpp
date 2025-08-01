#include <bits/stdc++.h>
using namespace std;

int sz = 0;
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

void print_forward(list<int> &l)
{
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

void print_backward(list<int> l)
{
    // reversing the l list and making sure we are not using refference in it otherwise the main list will be reversed as well.

    reverse(l.begin(), l.end());
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l;
    int q;
    cin >> q;
    while (q--)
    {
        int idx, val;
        cin >> idx >> val;
        int sz = l.size();

        if (idx < 0 || idx > sz)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (idx == sz)
        {
            l.push_back(val);
        }
        else if (idx == 0)
        {
            l.push_front(val);
        }
        else
        {
            l.insert(next(l.begin(), idx), val);
        }

        print_forward(l);
        print_backward(l);
    }

    return 0;
}