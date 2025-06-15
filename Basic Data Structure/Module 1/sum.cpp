#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int sum = 0;

    // getting the summation of 1 to n value using for loop
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }

    //using formula for less time 
    sum = (n * (n + 1)) / 2;
    
    cout << sum << endl;
    return 0;
}