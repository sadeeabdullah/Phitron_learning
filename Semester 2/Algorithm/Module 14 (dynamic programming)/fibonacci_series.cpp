#include <bits/stdc++.h>
using namespace std;

int fib(int i) // Tc O(2^n)
{
    // if (i == 0)
    //     return 0;
    // if (i == 1)
    //     return 1;
    if (i == 0 || i == 1) // if(i < 2)
        return 1;

    return fib(i - 1) + fib(i - 2);
}
int main()
{
    int n;
    cin>> n;
    cout << fib(n) << endl;
    return 0;
}