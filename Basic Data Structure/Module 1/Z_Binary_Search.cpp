#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // for taking the queries
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        int flag = 0; // for checking it is founded or not
        for (int i = 0; i < n; i++)
        {
            if (x == a[i])
            {
                flag = 1;
                break;
            }
        }

        (flag) ? cout << "found" << endl
               : cout << "not found" << endl;
    }

    return 0;
}