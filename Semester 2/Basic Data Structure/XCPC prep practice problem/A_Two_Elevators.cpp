#include <bits/stdc++.h>
#define loc 1
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int aDistance = abs(a - loc);
        int bDistance = abs(b - c) + abs(c - loc);

        if (aDistance < bDistance)
            cout << 1 << endl;
        else if (bDistance < aDistance)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}