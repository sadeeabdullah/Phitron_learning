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

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int x;
    cin >> x;

    // after taking 2 array as input we will take a new array to add all these element in one array
    a.insert(a.begin() + x, b.begin(), b.end());

    for (int element : a)
    {
        cout << element << " ";
    }

    return 0;
}