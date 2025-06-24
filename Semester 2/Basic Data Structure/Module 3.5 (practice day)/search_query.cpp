#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // sorting the array to do binary search
    sort(a.begin(), a.end());

    // taking the test case
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x;
        cin >> x;
        
        int l = 0, r = n - 1;

        int flag = 0;

        while(l <= r)
        {
            int mid = (l + r) / 2;

            if(a[mid] == x)
            {
                flag = 1; 
                break;
            }
            if(a[mid] > x)
            {
                r = mid - 1;
            }
            if(a[mid] < x)
            {
                l = mid + 1;
            }
        }

        (flag == 1) ? cout << "YES" << endl
                    : cout << "NO" << endl;
    }
    return 0;
}