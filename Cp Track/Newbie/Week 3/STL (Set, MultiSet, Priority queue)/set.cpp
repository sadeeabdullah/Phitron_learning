// set :
// 1. sorted(ascending in default)
// 2. unique

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
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x); // LOG n
    }

    // printing the set element

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    // for (int val : s)
    //     cout << val << " ";

    //  cannot do this
    // auto it = s.begin() + 1;
    // cout << *it << nl;

    cout << nl;

    auto it = s.find(6); // LOG N

    if (it != s.end())
        cout << "found" << nl;
    else
        cout << "Not found" << nl;

    // before erasing you must check if the value is available or not
    // if (s.find(6) != s.end())
    //     s.erase(6); // LOG N

    auto it_2 = s.find(6); // LOG N

    if (it_2 != s.end())
        cout << "found" << nl;
    else
        cout << "Not found" << nl;

    cout << s.count(6) << nl; // it checks the element is available or not            // LOG N

    cout << s.size() << nl; // o(1);

    cout << s.empty() << nl; /// O(1)

    // s.clear();  //O(N);

    // lower_bound is also special type of find function if the value available return the iterator if not return the immediate bigger values iterator

    auto it_l = s.lower_bound(50);          // LOG N

    if (it_l == s.end())
        cout << "END" << nl;
    else
        cout << *it_l << nl;

    // upperbound gives strictly bigger immediate valueiterator
    auto it_u = s.upper_bound(5);

    if (it_u == s.end())
        cout << "END" << nl;
    else
        cout << *it_u << nl;
    return 0;
}