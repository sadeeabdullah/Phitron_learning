#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) // time complexity O(N)
    {
        cin >> a[i];
    }

    //calculating prefix sum
    vector<int> pref(n);
    pref[0] = a[0];
    for (int i = 1; i < n; i++) // time complexity O(N)
    {
        pref[i] = pref[i - 1] + a[i];
    }
    

    //calculating suffix sum
    vector<int> sff(n);
    sff[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) // time complexity O(N)
    {
        sff[i] = sff[i + 1] + a[i];
    }

    //check suffix sum and prefix sum is same or not
    for (int i = 0; i < n; i++) // time complexity O(N)
    {
        if(sff[i] == pref[i])
        {
            cout << i << endl;
            break;
        }
    }
    
    // so over all time complexity of the code is O(N);
    return 0;
}