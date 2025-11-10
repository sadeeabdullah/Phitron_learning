// problem link ; https://cses.fi/problemset/task/1076

#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int
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


bool isEven(int x)
{
    return x % 2 == 0;
}

int main ()
{
    fastIO();
 
    int n, k;
    cin >> n >> k;
    pbds<pair<int,int>> pb;

    vector<pair<int,int>> a;
    loop(0, n - 1, i)
    {
        tInt(x);
        a.push_back({x,i});

    }   


    // we are going to use map to store the index of value
    map<int,int> mp;

    
    // we are going to make a sliding window and insert the value to the pbds and get the middle value

    int l = 0, r = 0;
    while(r < n)
    {
        pb.insert({a[r].first, r});
        if(r - l + 1 == k)
        {
            if(!isEven(k))
            {
                auto [val, idx] = *pb.find_by_order(k / 2);
                cout << val << " ";
            }
            else
            {
                auto [val, idx] = *pb.find_by_order((k / 2) - 1);
                cout << val << " ";
            }

            pb.erase({a[l].first, a[l].second});
            l++;
        }
        r++;
    }

    return 0;
}