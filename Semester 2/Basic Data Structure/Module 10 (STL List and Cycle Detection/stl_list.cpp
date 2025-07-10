#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    cout << l.size() << endl;
    list<int> l2(10);
    cout << l2.size() << endl;
    list<int> l3(10, 15);
    cout << l3.size() << endl;
    // iterator base for loop
    for (auto it = l3.begin(); it != l3.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";
    cout << *l3.end() << endl;
    // range base for loop
    for (int val : l3)
    {
        cout << val << " ";
    }
    cout << endl;

    // copying list
    list<int> l4 = {1, 3, 4, 45, 6};
    list<int> l5(l4);
    for (int val : l5)
    {
        cout << val << " ";
    }
    cout << endl;
    // constructing a list by copying all element of array
    int a[] = {1, 2, 3, 4, 45, 7, 8};
    list<int> l6(a, a + 8);
    for (int val : l6)
    {
        cout << val << " ";
    }
    cout << endl;
    
    //constructing a list by copying all element of vector
    vector<int> b = {1, 2, 3, 4, 45, 7, 8};
    list<int> l7(b.begin(), b.end());
    for (int val : l7)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}