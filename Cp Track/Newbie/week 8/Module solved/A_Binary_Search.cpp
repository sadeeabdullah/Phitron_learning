// problem link : https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

//Bismillah hir rahmanir rahim
//keep Patience, Destiny is more beautiful


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
#define tStr(var) string var; cin >> var;
#define testCase int t; cin >> t; while(t--)

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int n, m;
vector<int> a;

bool BinarySearch(int x)
{
    int left = 0, right = n - 1;
    
    while( left <= right)
    {
        int middle = (right + left) / 2;

        if(a[middle] == x)
        {
            return true;
        }
        else
        {
            if(a[middle] >= x)
            {
                right = middle - 1;
            }
            else if (a[middle] <= x)
            {
                left = middle + 1;
            }
        }
    }

    return false;
}
void solve()
{
    cin >> n >> m;
    a.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   
    while(m--)
    {
        int x;
        cin >> x;

        cout << ((BinarySearch(x)) ? "YES" : "NO") << nl;
    }
}
int main ()
{
    fastIO();
    solve();
    return 0;
}