#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    int val;
    while (cin >>val && val != -1)
    {
        l.push_back(val);
    }

    l.sort(); // sorting the list
    l.unique(); // removing the duplicates
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}