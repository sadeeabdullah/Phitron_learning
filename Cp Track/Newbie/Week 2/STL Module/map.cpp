#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
 
    map<int, int> mp;
    mp.insert({25,50});

    // efficient way
    mp[10] = 20;

    mp[10] = 10;

    mp[5] = 22;
    mp[234] = 12342;

    // // for (auto [key, value] : mp)
    // // {
    // //     cout << key  << " " << value << nl;
    // // }

    // for (auto it : mp)
    // {
    //     cout << it.first << " " << it.second <<nl;
    // }


    // auto it = mp.find(5);
    // cout << it->second << nl;

    // // if you find a key that doesnot exist in map
    // auto ite = mp.find(1232);                       // O(log n)
    // if(ite != mp.end())
    // {
    //     cout << ite->first << " " << ite->second << nl;
    // }
    // else
    // {
    //     cout << "Key not found" << nl;
    // }

    // // or other way if we get 0 then the value is not there
    // cout << mp[1231343] << nl;



    // mp.erase(5);
    // cout << mp[5] << nl;
    // mp.erase(5);                                        // O(log n)

    // if (mp.find(25) != mp.end())
    // {
    //     mp.erase(25);
    // }

    // cout << mp[25] << nl;



    // cout << mp.size() << nl;
    // cout << mp.empty() << nl;

    // auto itr = mp.begin();
    // cout << itr->first << " -> " << itr->second <<nl;
    // itr++;
    // cout << itr->first << " -> " << itr->second << nl;
     for (auto [key, value] : mp)
    {
        cout << key  << " -> " << value << nl;
    }


    // now comes the lowerbound and upperbound

    // LOWERBOUND : lower bound gives the exact iterator of the key if this is not available then it will give the immediate greater keys iterator
    
    // UPPERBOUND : upper bound strictly give the immediate greater keys iterator

    auto ite = mp.lower_bound(6);
    cout << ite->first << " ->>" << ite->second << nl;
    
    ite = mp.lower_bound(5);
    cout << ite->first << " ->>" << ite->second << nl;
    
    ite = mp.upper_bound(5);
    cout << ite->first << " ->>" << ite->second << nl;



    return 0;
}