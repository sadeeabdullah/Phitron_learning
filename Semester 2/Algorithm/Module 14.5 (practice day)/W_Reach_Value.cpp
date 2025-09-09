#include <bits/stdc++.h>
using namespace std;

// recursive call;
bool reach(long long n)
{
    if (n == 1)
        return true;
    if (n < 1 || (n > 1 && n < 9))
        return false;

    bool ans = false;
    if (n % 10 == 0)
    {
        ans = ans || reach(n / 10);
    }
    if (n % 20 == 0)
    {
        ans = ans || reach(n / 20);
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << ((reach(n)) ? "YES" : "NO") << endl;
    }
    return 0;
}