// problem link : https://codeforces.com/problemset/problem/44/A


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
    map<string, set<string>> trees_leaves;

    for(int i = 0; i < n; i++)
    {
        string tree, leaf_color;
        cin >> tree >> leaf_color;
        trees_leaves[tree].insert(leaf_color);
    }

    int count = 0;
    for(auto p : trees_leaves)
    {
        count += p.second.size();
    }
    cout << count << nl;
    return 0;
}