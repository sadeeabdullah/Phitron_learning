#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = { 10 , 243, 34};
    l.clear();
    cout << l.max_size() << endl;
    cout << l.size() << endl;
    cout <<((l.empty() == true) ? "empty" : "not empty") << endl;
    list<int> l2 = { 10 , 243, 34};
    l2.resize(10,50);
    for(int val : l2)
    {
        cout << val << " "; 
    }
    return 0;
}