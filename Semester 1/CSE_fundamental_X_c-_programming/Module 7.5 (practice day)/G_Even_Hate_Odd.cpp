#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        

        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            // int a[n]; no need to take array because we are not using it later
            int even_count = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    even_count++;
                }
            }

            int even_needed = n / 2;

            cout << abs(even_needed - even_count) << endl;
        }

    }
    return 0;
}