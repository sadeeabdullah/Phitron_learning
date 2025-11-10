// problem link : https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define loop(start, end, var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define testCase \
    {            \
    }            \
    int tc;      \
    cin >> tc;   \
    while (tc--)
#define tInt(var) int var; cin >> var;
#define tLL(var)  ll var;      cin >> var;
#define tStr(var) string var; cin >> var;
using namespace std;

int main()
{
    fastIO();

    tStr(s);
    tInt(k);

    // taking set for counting the size of uniqueness of array
    map<char, int> st;

    int n = s.size();

    int l = 0, r = 0, ans = -1;

    while (r < n)
    {
        st[s[r]]++;

        if (st.size() == k)
        {
            ans = max(ans, r - l + 1);
        }
        else if (st.size() > k)
        {
            while (st.size() > k && l <= r)
            {
                st[s[l]]--;
                if (st[s[l]] == 0)
                {
                    st.erase(s[l]);
                }
                l++;
            }
            if (st.size() == k)
            {
                ans = max(ans, r - l + 1);
            }
        }
        r++;
    }

    cout << ans << nl;

    return 0;
}