#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int n, s;
        cin >> n >> s;

        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }


        // if the array have only one element then it will check that the only element is equal to sum or not
        //  if not then it will print NO;
        if (n < 3)
        {
            cout << "NO" << endl;
        }
        if (n >= 3)
        {
            int flag = 0;
            for (int k = 0; k < n - 2; k++)
            {

                for (int l = k + 1; l < n - 1; l++)
                {
                    for (int m = l + 1; m < n; m++)
                    {
                        int sum = a[k] + a[l] + a[m];
                        if (sum == s)
                        {
                            cout << "YES" << endl;
                            flag = 1;
                            break;
                        }
                    }
                    if (flag == 1)
                    {
                        break;
                    }
                }
                if (flag == 1)
                {
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
