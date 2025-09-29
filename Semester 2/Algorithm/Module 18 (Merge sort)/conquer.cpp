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

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    // the given 2 array is already sorted
    // we need to take a new array and insert value into it by comparing

    int c[n + m];
    int i, j, curr;
    i = 0, j = 0, curr = 0;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[curr++] = a[i++];
            // c[curr] = a[i];
            // i++;
            // curr++;
        }
        else
        {
            c[curr++] = b[j++];
            // c[curr] = b[j];
            // j++;
            // curr++;
        }
    }

    // if any value exist in any array
    while (i < n)
    {
        c[curr++] = a[i++];
        // c[curr] = a[i];
        // i++;
        // curr++;
    }
    while (j < m)
    {
        c[curr++] = b[j++];
        // c[curr] = b[j];
        // j++;
        // curr++
    }

    for (int val : c)
        cout << val << " ";

    return 0;
}