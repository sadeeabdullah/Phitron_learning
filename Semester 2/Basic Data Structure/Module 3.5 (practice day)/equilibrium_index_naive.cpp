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
    
    for (int i = 0; i < n; i++)
    {
        //let's assume that index i is the equilibrium index
        int assume_equilibrium = i; 
        long long sum_bfr_eqlbrm = 0;
        for (int j = 0; j < assume_equilibrium; j++) // in the first iteration the 
        {
            sum_bfr_eqlbrm += a[j];
        }
        long long sum_aft_eqlbrm = 0;
        for (int j = assume_equilibrium + 1; j < n; j++)
        {
            sum_aft_eqlbrm += a[j];
        }

         if(sum_aft_eqlbrm == sum_bfr_eqlbrm)
        {
            cout << i << endl;
            break;
        }
        
    }
    
    return 0;
}