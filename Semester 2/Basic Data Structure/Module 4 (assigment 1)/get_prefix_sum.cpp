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
    
    // taking pref vector to store the prefix sum value and setting the data type of the vector to long long because the constrain in a[i] is 10^9 so when we add these type of constant it may cause overflow
    vector<long long int> pref(n);
    // setting the first value of a vector to first value of pref vector
    pref[0] = a[0];
    for (int  i = 1; i < n; i++)
    {
        pref[i] = pref[i -1] + a[i];
    }
    
    for (int  i = n - 1; i >= 0; i--)
    {
        cout << pref[i] << " ";
    }
    cout << endl;
    
    return 0;
}