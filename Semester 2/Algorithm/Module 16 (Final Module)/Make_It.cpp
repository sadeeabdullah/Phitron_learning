#include <bits/stdc++.h>
using namespace std;

bool rec(int a)
{
    if (a == 1)
        return true;
    if (a <= 0)
        return false;
    
    bool ans = false;

    if (a % 2 == 0)
    {
        ans = ans || rec(a / 2);
    }
    else
    {
        ans = ans || rec(a - 3);
    }
    
    
    return ans;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a;
        cin >> a;
        // calling rec function
        cout << ((rec(a)) ? "YES" : "NO") << endl;
    }
    return 0;
}