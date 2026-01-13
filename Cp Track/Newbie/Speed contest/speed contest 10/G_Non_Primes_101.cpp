#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<bool> is_prime(1000, true);
void Sieve(ll n)
{ // TC: O(nloglogn)
    for (ll p = 2; p <= n; p++)
    {
        if (is_prime[p])
        {
            // prime.push_back(p);
            for (ll i = p * p; i <= n; i += p)
            {
                is_prime[i] = false;
            }
        }
    }
}
int main()
{
    Sieve(500);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int e1 = -1, e2 = -1, o1 = -1, o2 = -1;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] & 1)
            {
                if (o1 == -1)
                    o1 = i;
                else if (!(a[o1] == 1 && a[i] == 1))
                    o2 = i;
            }
            else
            {
                if (e1 == -1)
                    e1 = i;
                else
                    e2 = i;
            }
        }
        if (e1 != -1 && e2 != -1)
            cout << e1 + 1 << " " << e2 + 1 << endl;
        else if (o1 != -1 && o2 != -1)
            cout << o1 + 1 << " " << o2 + 1 << endl;
        else if (e1 != -1 && o1 != -1 && !is_prime[a[e1] + a[o1]])
            cout << e1 + 1 << " " << o1 + 1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}