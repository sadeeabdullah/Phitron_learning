// problem link : https://codeforces.com/problemset/problem/1790/D

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define loop(start, end, var) for (int var = (start); var <= (end); var++)
using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        multiset<int> st;
        loop(0, n - 1, i)
        {
            int x;
            cin >> x;
            st.insert(x);
        }

        int cnt = 0;
        loop(0, n - 1, i)
        {
            if (st.empty())
            {
                break;
            }
            int currMin = *(st.begin());
            st.erase(st.begin());

            while (true)
            {
                auto it = st.find(currMin + 1);

                if (it != st.end())
                {
                    currMin = *it;
                    st.erase(it);
                }
                else
                    break;
            }
            cnt++;
        }

        cout << cnt << nl;
    }
    return 0;
}
