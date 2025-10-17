// problem link : https://www.spoj.com/problems/ACMCEG2B/en/

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    int n;
    cin >> n;
    map<pair<int,int>, string> mp;
    while(n--)
    {
        int a, b;
        string name;
        cin >> a >> b >> name;
        mp[{a,b}] = name;
    }  
    
    int q;
    cin >> q;
    while(q--)
    {
        int a, b;
        cin >> a >> b;
        cout << mp[{a,b}] << nl;
    }
    return 0;
}