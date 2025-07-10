#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {20, 30, 45, 34, 45, 55, 56, 4, 45};
    // l.remove(45);
    for(int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    
    l.sort(); // ascending sort
    for(int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    l.sort(greater<int>()); // descending sort
    for(int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    
    l.unique(); // it will check the duplicate value and remove this "N.B: only works when the list is sorted"
    for(int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    l.reverse(); // it will reverse the list
    for(int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}