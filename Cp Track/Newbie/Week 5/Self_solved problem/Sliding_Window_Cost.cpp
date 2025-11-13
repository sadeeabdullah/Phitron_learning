//problel ink :https://cses.fi/problemset/task/1077


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
 
    tInt(n); tInt(k);
    vector<int> a(n);
    set<pair<int,int>> left_set, right_set;

    loop(0, n - 1, i)
    {
        cin >> a[i];
    }

    if(k == 1)
    {
        loop(0, n - 1, i)
        {
            cout << 0 << " ";
        }
        return 0;
    }

    if (k == 2)
    {
        loop(1, n - 1, i)
        {
            cout << abs(a[i - 1] - a[i]) << " ";
        }
    }

    vector<pair<int, int>> st;
    loop(0, k - 1, i)
    {
        st.push_back({a[i],i});
    }

    sort(st.begin(), st.end());
    
    ll left_set_sum = 0, right_set_sum = 0;

    for(int i = 0; i < k / 2 + (k%2); i++)
    {
        left_set.insert(st[i]);
        left_set_sum += st[i].first;
    }

    for(int i = k / 2 + (k % 2); i < k; i++)
    {
        right_set.insert(st[i]);
        right_set_sum += st[i].first;
    }

    ll median = left_set.rbegin()->first;

    cout << median * left_set.size() - left_set_sum + right_set_sum - median * right_set.size() << " ";


    for(int j = 1; j < n - k + 1; j++)
    {
        if (left_set.count({a[j - 1], j - 1}))
        {
            
        }
    }
    return 0;
}