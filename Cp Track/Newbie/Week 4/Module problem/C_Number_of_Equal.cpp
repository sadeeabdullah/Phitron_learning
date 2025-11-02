// problem link : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
using namespace std;

int main ()
{
    fastIO();
 
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), b(m + 1);

    loop(1, n, i)
    {
        cin >> a[i];
    }
    loop(1, m, i)
    {
        cin >> b[i];
    }

    ll ans = 0;
    int i = 1, j = 1;
    while(i <= n && j <= m)
    {
        int curr = a[i], cnt1 = 0, cnt2 = 0;

        while(i <= n && a[i] == curr)
        {
            cnt1++, i++;
        }
        while (curr > b[j])
        {
            j++;
        }
        while (j <= m && curr == b[j])
        {
            cnt2++, j++;
        }
        
        ans += (1LL * cnt1 *cnt2);
    }

    cout << ans << nl;
    return 0;
}