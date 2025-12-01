#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define  nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout <<"YES" << nl;
#define no cout << "NO" << nl;
#define testCase int tc; cin >> tc; while(tc--)

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
  int n;
    string s;
    cin >> n >> s;
    
    map<int, int> count;
    count[0] = 1;
    long long ans = 0;
    int old = 0;
    
    for (int i = 0; i < n; i++) {
        int new_prefix = old + (s[i] == 'a' ? 1 : -1);
        int target = new_prefix - 1;
        ans += count[target];
        if (s[i] == 'a' && target == old) {
            ans--;
        }
        count[new_prefix]++;
        old = new_prefix;
    }
    
    cout << ans << endl;
}
int main()
{
    fastIO();

    solve();

    return 0;
}