#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    int val;
    cin >> val;
    while (cin >> val && val !=  -1)
    {
        l.push_back(val);
    }
    l.sort();
    l.unique(); // it removes the duplicates
    for(int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}