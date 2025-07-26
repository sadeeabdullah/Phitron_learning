#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin >> tc;
    while (tc--)
    {
        stack<char> st;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (!st.empty() && st.top() == '1' && c == '0')
                st.pop();
            else if (!st.empty() && st.top() == '0' && c == '1')
            {
                st.pop();
            }
            else 
            {
                st.push(c);
            }
        }
        cout << ((st.empty()) ? "YES" : "NO") << endl;

    }
    return 0;
}