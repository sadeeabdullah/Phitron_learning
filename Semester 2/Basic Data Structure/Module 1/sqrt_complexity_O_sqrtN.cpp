#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for (int i = 1; i <= n; i++) // OPERATION COUNT OR TIME COMPLEXITY : O(n)
    // // {   if(n % i == 0)
    //     // cout << i << endl;
    // }
    for (int i = 1; i <= sqrt(n); i++) // OPERATION COUNT OR TIME COMPLEXITY : O(sqrt (N)) less operation but all divisor
    {
        if(n % i == 0)
        cout << i << " " << n / i << " ";
    }
    
    return 0;
}