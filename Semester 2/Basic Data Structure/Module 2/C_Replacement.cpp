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

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            replace(a.begin(), a.end(), a[i], 1);
        }
        else if(a[i] < 0)
        {
            replace(a.begin(), a.end(), a[i], 2);
        }
    }

    for(int x: a)
    {
        cout << x << " ";
    }
    return 0;
}