#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();

    int n;
    cin >>n;
 
    string s;
    // cin >> s;
    // cout << s <<nl;

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        s.push_back(c);
    }


    cout<<  s << nl;

    s.pop_back();

    cout << s.front() << " " <<s.back() << nl;
    cout << s.empty() <<nl;
    s.clear();
    cout << s.empty() << nl;

    string sr;
    cin >> sr;
    cout << sr.substr(2,4) << nl;
    cout << sr.substr(2) << nl; // if you dont know how long you need           time complexity O(M) here m is the length of the needed substring length
    return 0;
}