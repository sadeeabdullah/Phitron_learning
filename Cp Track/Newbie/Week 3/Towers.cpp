// problem link : https://cses.fi/problemset/task/1073

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
 
    int n;
    cin >> n;
    multiset<int> st;
    
    loop(0, n - 1, i)
    {
        int x;
        cin >> x;

        auto it = st.upper_bound(x);
        if (it == st.end())
        {
            st.insert(x);
        }
        else
        {
            st.erase(it);
            st.insert(x);
        }
    }

    cout << st.size() << nl;
    return 0;
}