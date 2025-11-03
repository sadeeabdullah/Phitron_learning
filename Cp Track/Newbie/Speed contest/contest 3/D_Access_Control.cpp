// problem link : https://vjudge.net/contest/763324#problem/D

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
        int n, x;
        cin >> n >> x;

        int swipesRemaining = 0;
        string s;
        cin >> s;

        if (s[0] == '0')
        {
            no;
            continue;
        }


        bool flag = true;
        loop(0, n - 1, i)
        {
            if (s[i] == '0' && swipesRemaining <= 0)
            {
                flag = false;
                break;
            }
            if (s[i] == '1')
            {
                swipesRemaining += x;
            }
            else if (s[i] == '0')
            {
                swipesRemaining--;
            }
        }
        if (flag)
        {
            yes;
        }
        else
            no;
    }
    return 0;
}