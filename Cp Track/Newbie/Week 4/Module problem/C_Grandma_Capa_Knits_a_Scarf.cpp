// problem link : https://codeforces.com/problemset/problem/1582/C
// explaination : https://drive.google.com/file/d/1C4dDkb7kWi9tAXvSE25I-s69lrOrvWDb/view

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
 
    testCase
    {
        int n; 
        cin >> n;
        string s;
        cin >> s;

        int ans = INT_MAX;
        for(char ch = 'a'; ch <= 'z'; ch++)
        {
            int cnt = 0;
            bool flag = false;

            for(int l = 0, h = n - 1; l < h; )
            {
                if (s[l] != s[h])
                {
                    if (s[l] == ch)
                    {
                        l++, cnt++;
                    }
                    else if (s[h] == ch)
                    {
                        h--, cnt++;
                    }
                    else
                    {
                        flag = true;
                        break;
                    }
                }
                else
                {
                    l++, h--;
                }
            }

            if (!flag)
            {
                ans = min(cnt, ans);
            }
        }

        if (ans == INT_MAX)
        {
            cout << -1 << nl;
        }
        else
            cout << ans << nl;
    }
    return 0;
}