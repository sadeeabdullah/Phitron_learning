#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};
    list<int> l2;
    l2.assign(l.begin(),l.end());
    // l2 =  l;
    for(int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;
    
    // we can push back or add any value in tail using push back
    l2.push_back(40); // add this value in back
    l2.push_front(5); // add this value in front
    for(int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;
    l2.pop_back(); // remove the last element
    l2.pop_front(); // remove the first element
    for(int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}