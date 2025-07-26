#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {

        // taking stack to do all these operation
        stack<char> st;

        // here is the main code of deletion
        string s;
        cin >> s;
        for (char c : s)
        {
            if (st.empty())
            {
                st.push(c);
            }
            else if (st.top() == '0' && c == '1')
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