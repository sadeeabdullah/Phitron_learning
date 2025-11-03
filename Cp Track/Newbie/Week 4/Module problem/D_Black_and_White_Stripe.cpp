// problem link : https://codeforces.com/problemset/problem/1690/D


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
using namespace std;

int main ()
{
    fastIO();
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int i = 0, j = 0;
        int black_cnt = 0;
        int mx_black = 0;
        while (j < n)
        {
            if (s[j] == 'B')
                black_cnt++; 

            if (j - i + 1 == k){
                mx_black = max(mx_black, black_cnt);
                if (s[i] == 'B')
                    black_cnt--;

                i++;
            }
            j++;
        }

        cout << k - mx_black << nl;
    }
    return 0;
}