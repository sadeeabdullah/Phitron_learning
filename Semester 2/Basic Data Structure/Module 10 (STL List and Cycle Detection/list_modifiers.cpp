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
    
    cout << *next(l2.begin(),1) << endl; // without derefferencing it is an iterator it works like the index in list for addressing position
    
    //insert function
    l2.insert(next(l2.begin(),2), 56);

    //we also can insert a whole list in the existing list using the insert function
    list <int> l3 = {12, 324,343, 5};
    l2.insert(next(l2.begin(),3),l3.begin(),l3.end());
    
    //we also can insert vector or array into that
    vector<int> a = {14,345};
    l2.insert(next(l2.begin(),3),a.begin(),a.end());
    int b[] = { 15 , 346};
    l2.insert(next(l2.begin(),3),b,b + 2);
    for(int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;
    
    l2.erase(next(l2.begin(),9),next(l2.begin(),11));
    for(int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;
    

    //replace function is not under STL
    replace(l2.begin(), l2.end(),15, 100);
    for(int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;


    // finding function is not under STL
    auto it = find(l2.begin(),l2.end(),100);
    cout << ((it != l2.end()) ? "found" : "not found") << endl;
    return 0;
}