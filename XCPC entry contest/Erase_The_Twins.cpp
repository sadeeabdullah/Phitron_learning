#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
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
        string s;
        cin >> s;

        // we will be using stack;

        stack<char> str;
        for(char c : s)
        {
            if(!str.empty() &&str.top() == c)
            {
                str.pop();
            }
            else
            {
                str.push(c);
            }
        }
        cout << str.size() << nl;

        
    }
    return 0;
}