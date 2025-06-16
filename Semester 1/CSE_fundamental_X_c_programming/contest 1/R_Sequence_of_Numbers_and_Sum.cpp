#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;

    while (cin >> n >> m)
    {
        if (n <= 0 || m <= 0)
        {
            return 0;
        }
        int minimum = m, maximum = n, sum = 0;
        if (min(n, m) == n)
        {
            minimum = n;
            maximum = m;
        }

        for (int i = minimum; i <= maximum; i++)
        {
            sum += i;
           cout << i << " ";
        }
        cout << "sum =" << sum << endl;
    }

    return 0;
}