// problem link : https://codeforces.com/problemset/problem/637/B
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
    map<string, vector<int>> mp;

    vector<pair<int,string>> idx;

    for (int i = 0; i < n; i++)
    {
        string  name;    cin >> name;
        mp[name].push_back(i);
    }

    for (auto [x,y] : mp)
    {
        idx.push_back({y.back(), x});
    }

    sort(idx.rbegin(), idx.rend());

    for (auto  [x, y] : idx)
    {
        cout << y <<nl;
    }
    return 0;
}