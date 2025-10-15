// problem link: https://www.codechef.com/START208D/problems/SPRCLN

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
 
    int s, l;
    cin >> s >> l;
    cout << ((s * 30) + (l * 60)) << nl;
    return 0;
}