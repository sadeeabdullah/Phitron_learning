#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    queue<string> qu;
    string s;
    while (q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            cin >> s;
            qu.push(s);
        }
        else if (cmd == 1)
        {
            if (!qu.empty())
            {
                cout << qu.front() << endl;
                qu.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}