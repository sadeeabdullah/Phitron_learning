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
    vector<int> UpdatedArray;
    for (int i = 0; i < n + m; i++)
    {
        if(i < x)
        {
            UpdatedArray.push_back(a[i]);
        }
        else if(i >= x && i < x + m)
        {
            UpdatedArray.push_back(b[i - x]);
        }
        else if(i >= m)
        {
            UpdatedArray.push_back(a[i - m]);
        }
    }

    for(int element: UpdatedArray)
    {
        cout << element << " ";
    }
    
    return 0;
}