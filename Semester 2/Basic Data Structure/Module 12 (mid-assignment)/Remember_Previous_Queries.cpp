#include <bits/stdc++.h>
using namespace std;

// printing the list forward
void print_forward(list<int> &l)
{
    cout << "L -> ";
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}
// printing the list backward
void print_backward(list<int> &l)
{
    list<int> l_copy = l;
    l_copy.reverse();
    cout << "R -> ";
    for (int val : l_copy)
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
    int x, v;

    while (q--)
    {
        cin >> x >> v;
        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < l.size())
            {
                auto it = next(l.begin(), v);
                l.erase(it);
            }
        }
        print_forward(l);
        print_backward(l);
    }

    return 0;
}