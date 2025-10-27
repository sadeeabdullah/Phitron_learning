// problem link : https://vjudge.net/contest/761292#problem/D

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
using namespace std;

bool isVowel (char c)
{
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}
int main ()
{
    fastIO();
    
    int tc;
    cin >> tc;
    string s;
    string t = "CODETOWN";
    while(tc--)
    {
        cin >> s;
        bool flag = true;
        loop(0,7,i)
        {
            if(isVowel(s[i]) != isVowel(t[i]))
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    return 0;
}