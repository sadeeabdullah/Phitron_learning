//problem link : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A

// in fixed size  sliding window the window size is fixed and told by the problem setter
// in variable size sliding window size is not fixed
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

    int n;
    ll k;
    cin >> n >>  k;
    vector<int> a(n);
    loop(0, n - 1, i)
    {
        cin >> a[i];
    }

    // we are going to use variable size sliding window
    // when the sum of the sub array or segment element exceed the given k value then we will slide the window also remove the contribution the left element

    ll l= 0, r = 0;

    ll ans = 0, sum = 0;

    while(r < n)
    {
        sum += a[r];
        if(sum <= k)
        {
            ans = max(ans, r - l + 1);
        }
        else
        {
            sum -= a[l]; 
            l++;
        }
    
        r++;
    }
    cout << ans << nl;
    return 0;
}
