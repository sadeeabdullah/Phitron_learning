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

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == a[i + 1])
        {
            flag = 1;
            break;
        }
    }
    
    (flag == 1) ? cout << "Duplicate" << endl
                : cout << "Not Duplicate" << endl;
    return 0;
}