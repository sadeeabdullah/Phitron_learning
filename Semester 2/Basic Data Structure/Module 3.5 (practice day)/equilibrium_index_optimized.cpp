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

    //getting a prefix sum
    vector<int> pref(n);
    //setting the first value of the given vector as the first value of the pref vector
    pref[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }

    //getting a suffix sum
    vector<int> suff(n);
    //setting the first value of the given vector as the first value of the suff vector
    suff[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suff[i] = suff[i + 1] + a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if(pref[i] == suff[i])
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << "No equilibrium index detected" << endl;
    
    return 0;
}