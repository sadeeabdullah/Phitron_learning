// problem link : https://open.kattis.com/problems/qaly

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    
    int n;
    cin >> n; 

    float total = 0.00;
    while(n--)
    {
        float a, b;
        cin >> a >> b;
        total += (a * b);
    }
    cout << fixed << setprecision(3) << total << nl;
    return 0;
}