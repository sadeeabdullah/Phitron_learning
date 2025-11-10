//problem link : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define testCase{} int tc; cin >> tc; while(tc--)
using namespace std;

int main ()
{
    fastIO();
 
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    loop(0, n - 1, i)
    {
        cin >> a[i];
    }

    // taking multiset for calculating the min and max value difference
    multiset<ll> ml;

    ll ans = 0;
    int l = 0, r = 0;
    while(r < n)
    {
        ml.insert(a[r]);
        if (!ml.empty())
        {
            ll mn = *(ml.begin());
            ll mx = *(--ml.end());
            if(mx - mn <= k)
            {
                ans += (r - l + 1);
            }
            else
            {
                while(mx - mn > k && l <= r)
                {
                    ml.erase(ml.find(a[l]));
                    l++;

                    // update the min nd max value
                    mn = *(ml.begin());
                    mx = *(--ml.end());
                }
                mn = *(ml.begin());
                mx = *(--ml.end());
                if(mx - mn <= k)
                {
                    ans += (r - l + 1);
                }
            }
            r++;
        }
    }

    cout << ans << nl;
    return 0;
}