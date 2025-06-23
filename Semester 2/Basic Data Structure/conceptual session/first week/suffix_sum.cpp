#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    //taking the input of the vector element
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> suf(n);
    suf[n - 1] = a[n -1]; // setting the last value of a(n) to the last value of suf(n);
    for (int i = n - 2; i >= 0; i--) // setting the 2nd last value of suf(n) to last value of suf(n) + 2nd last value of a(n) then 3rd last value of suf(n) to 2nd last value of suf(n) + 3rd last value of a(n) and so on
    {
        suf[i] = suf[i + 1] + a[i];
    }

    //showing the suffix vector of a(n)
    for (int i = 0; i < n; i++)
    {
        cout << suf[i] << " ";
    }
    
    return 0;
}