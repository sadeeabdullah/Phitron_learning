#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
 
    // map<vector<int> , int> mp;
    // vector<int> a;
    // a.push_back(4);
    // a.push_back(34);
    // a.push_back(34234);
    // a.push_back(323);
    
    // mp[a] = 5;
    
    // for(auto [x, y] : mp)
    // {
    //     for (int val : x)
    //     cout << val << " ";     //4 34 34234 323 
    //     cout << nl;
        
    //     cout << y;              //5
    // }

    map<int, set<int>>mp;


    set<int> s1;
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);

    set<int> s2;
    s2.insert(6);
    s2.insert(33);
    s2.insert(4435);

    set<int> s3;
    s3.insert(6);
    s3.insert(3);
    s3.insert(4234);

    mp[3] = s1;
    mp[23] = s2;
    mp[213] = s3;

    for (auto [x, y] : mp)
    {
        cout << x << "  -->  ";
        for (int val : y)
            cout << val << " ";
        cout << nl;
    }


    // lowerbound of key then find the lowerbound in the set
    int x = 6, y = 8;
    auto lb1 = mp.lower_bound(x);

    if (lb1 != mp.end())
    {
        int ans = lb1->first;
        auto lb2 = mp[ans].lower_bound(y);
        if(lb2 != mp[ans].end())
        {
            cout << *lb2 << nl;
        }
    }

    return 0;
}