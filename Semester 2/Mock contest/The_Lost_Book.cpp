#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {

            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}