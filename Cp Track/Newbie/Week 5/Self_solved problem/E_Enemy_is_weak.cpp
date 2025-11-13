//problem link ; https://codeforces.com/problemset/problem/61/E


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
    vector<int> a(n);
    pbds<int> pb_right, pb_left;
    loop(0, n - 1, i)
    {
        cin >> a[i];
        pb_right.insert(a[i]);
    }

    ll total = 0;
    loop (1, n - 2, i)
    {
        int curr_val = a[i];

        pb_right.erase(a[i - 1]); // erasing this value from right and inserting to left so that we can do the count easily
        pb_left.insert(a[i - 1]);

        ll left_bigger = pb_left.size() - pb_left.order_of_key(curr_val);
        ll right_smaller = pb_right.order_of_key(curr_val);

        total += left_bigger * right_smaller;
    }

    cout << total << nl;
    return 0;
}