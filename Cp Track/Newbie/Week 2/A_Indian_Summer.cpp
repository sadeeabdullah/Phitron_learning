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
    map<pair<string, string>, bool> trees_leaves;

    for(int i = 0; i < n; i++)
    {
        string tree, leaf_color;
        cin >> tree >> leaf_color;
        trees_leaves[{tree, leaf_color}] = true;
    }

    cout << trees_leaves.size() << nl;
    return 0;
}