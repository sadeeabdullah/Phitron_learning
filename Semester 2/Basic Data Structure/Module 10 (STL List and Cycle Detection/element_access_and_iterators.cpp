#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 2, 32, 3, 4, 34};
    cout << l.front() << endl; // print the front element
    cout << l.back() << endl; // print the last element
    cout << *next(l.begin(), 3) << endl; // print the last element
    cout << *l.begin() << endl; // print the first
   // print the first value pointer (l.begin()), print the last value pointer
//    (l.end())
    return 0;
}