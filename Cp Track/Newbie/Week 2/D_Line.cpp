// problem link :https://codeforces.com/contest/1722/problem/D
// approach:

// if you look at the problem you may see that there is a string L and R. L means L is looking at the left side and R means the human is looking at the right side. their own value is how many people they can see.
// You have to maximize the total (you can change their looking side and the total is the sum of how many people they can see).
// count the changes needed to get the max total then set the ans vector to changes index to last the  total and make a dispatch array based on if you dont change one index people looking side what would happen. then sort it so and set the new array ascnding


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;




int main ()
{
    fastIO();
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;      cin >> n;
        string s;   cin >> s;

        int minChange = 0;
        ll total = 0;

        vector<ll> dispatch;

        for (int i = 0; i < n; i++)
        {
            ll l = i;
            ll r = n - i - 1;

            if (s[i] == 'L')
            {
                if (l > r)
                {
                    total +=l;
                }
                else
                {
                    minChange++;
                    total += r;
                    dispatch.push_back(r - l);

                }
            }
            else if (s[i] == 'R')
            {
                if (l < r)
                {
                    total += r;
                }
                else
                {
                    minChange++;
                    dispatch.push_back(l - r);
                    total += l;
                }
            }
        }

        sort(dispatch.rbegin(), dispatch.rend());
        
        vector<ll> ans(n + 1);
        for (int i =minChange; i <= n; i++)
        {
            ans[i] = total;
        }

        for (int i = minChange - 1; i > 0; i--)
        {
            total -= dispatch.back();
            dispatch.pop_back();
            ans[i] = total;
        }
        


        


        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << nl;
    }


    return 0;
}