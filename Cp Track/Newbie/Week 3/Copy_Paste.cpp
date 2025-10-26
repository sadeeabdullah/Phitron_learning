// problem link : https://www.codechef.com/problems/RRCOPY
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
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        set<int> s;
        loop(1,n,i)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        cout << s.size() <<nl;
    }
    return 0;
}