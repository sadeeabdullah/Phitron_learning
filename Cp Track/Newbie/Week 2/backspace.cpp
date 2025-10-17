#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
 
    string s;
    cin >> s;


    string ans;
    for(char c : s)
    {
        if (c == '<')
        {
            if (!ans.empty())
                ans.pop_back();
            
        }   
        else
        {
            ans.push_back(c);
        }
    }

    cout << ans << nl;
    return 0;
}