// set :
// 1. sorted(ascending in default)
// 2. Not unique (can have duplicate value)

// cannot use index to access set element

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    fastIO();

    int n;
    cin >> n;
    multiset<int> ml;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x); // LOG n
    }


    for (int val : ml)
        cout << val << " ";
    cout << nl;


    auto it = ml.find(4);

    if (it != ml.end())
        cout <<  "found" << nl;
    else
        cout << "not found" << nl;

    ml.erase(6);        // log n here the value is single time

    for (int val : ml)
        cout << val << " ";
    cout << nl;
    
    // ml.erase(9);        // log n +k (here k is the value of the repitation of the value)
    // for (int val : ml)
    //     cout << val << " ";         // 2 2 4 
    // cout << nl;


    // how to not delete all duplicate--> erase the iterator
    auto it_l = ml.find(9);
    ml.erase(it_l);     // log n + log n(it is 2log n doesnot matter for small data but for big data it matters)
    for (int val : ml)
        cout << val << " ";
    cout << nl;


    // log n for single element

    // log n + k for repititative element

    cout << ml.count(9) << nl;

    
    auto it_lo = ml.lower_bound(50);          // LOG N

    if (it_lo == ml.end())
        cout << "END" << nl;
    else
        cout << *it_lo << nl;

    
    // here the difference is for the duplicate
    auto it_upp = ml.upper_bound(9);          // LOG N

    if (it_upp == ml.end())
        cout << "END" << nl;
    else
        cout << *it_upp << nl;
    return 0;
}