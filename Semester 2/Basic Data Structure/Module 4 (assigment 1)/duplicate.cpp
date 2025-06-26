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
    
    sort(a.begin(), a.end());

    int flag =  1;
    for (int i = 0; i < n - 1; i++)
    {
        if(a[i] == a[i + 1])
        {
            flag = 0;
            break;
        }
    }

    (flag == 1) ? cout << "NO" << endl
           : cout << "YES" << endl;    
    return 0;
}