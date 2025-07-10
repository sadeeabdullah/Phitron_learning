#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    cout << l.size() << endl;
    list<int> l2(10);
    cout << l2.size() << endl;
    list<int> l3(10,15);
    cout << l3.size() << endl;
    //iterator base for loop
    for(auto it = l3.begin(); it != l3.end(); it ++)
    {
        cout << *it << " ";
    }
    cout << "\n";
    return 0;
}