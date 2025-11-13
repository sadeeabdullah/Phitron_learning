// problem link : https://cses.fi/problemset/task/2162

#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define testCase{} int tc; cin >> tc; while(tc--)
#define tInt(var) int var; cin >> var;
#define tLL(var)  ll var;  cin >> var;
#define tStr(var) string var; cin >> var;

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main ()
{
    fastIO();
 
    tInt(n);
    pbds<int> pb;
    loop(0, n - 1, i)
    {
        pb.insert(i + 1);
    }
    
    int pos = 0;
    // while(n--) // here using n as size
    // {
    //     pos = (pos + 1) % (n + 1);
    //     auto it = pb.find_by_order(pos);
    //     cout << *it << " ";
    //     pb.erase(it);
    // }
    int size = n;
    while(size > 0) // here using n as size
    {
        pos = (pos + 1) % size;
        auto it = pb.find_by_order(pos);
        cout << *it << " ";
        pb.erase(it);
        size--;
    }
    return 0;
}