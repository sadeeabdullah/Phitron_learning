

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        bool flag = false;
        

        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] == '1')
            {
                if (i - 1 >= 0 && b[i - 1]=='1')
                    swap(a[i],b[i - 1]);

                else if (i + 1 < n && b[i + 1] == '0')
                    swap(a[i], b[ i+ 1]);
            }
            else if (a[i] == '0')
            {
                if (i + 2 < n && a[ i + 2 ] == '1' && b[i+ 1] == '1' && i - 1 >= 0 && b[i - 1] == '0')
                {
                    swap(b[i - 1], a[i]);
                    swap(a[i + 2], b[i + 1]);
                }
            }
        }

        cout << ((flag) ? "NO" : "YES") << nl;
    }


return 0;
}