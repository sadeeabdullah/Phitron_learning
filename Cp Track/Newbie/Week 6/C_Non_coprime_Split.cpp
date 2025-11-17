//problem link : https://codeforces.com/problemset/problem/1872/C


// key observation :

// 1. if the right number is less than or equal to three then we dont have any number so it is impossible
// 2. if the right number is equla to the left then we have to check evenor odd if eeven then answer would be r/2 " " r/ 2 else we will do r-- and do the same thing
//3. else we have to check the biggest divisor if not 1 then the answer would be biggest divisor or r and r-biggest divisor
#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define testCase{} int tc; cin >> tc; while(tc--)
#define tInt(var) int var; cin >> var;
#define tLL(var)  ll var;  cin >> var;
#define tStr(var) string var; cin >> var;

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int divisor(int n)
{
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return i;
        }
    }
    return -1;
}
bool isPrime (ll l)
{
    for(ll i = 2; i * i <= l; i++)
    {
        if(l % i == 0)
        {
            return false;
        }
    }

    return true;
}
int main ()
{
    fastIO();
 
    testCase
    {
        tInt(l);
        tInt(r);
        if(l <= 3 && r <= 3)
        {
            cout << -1 << nl;
            continue;
        }

        if (r - l >= 1)
        {

            if(r % 2 == 0)
            {
                cout << r / 2  << " " << r / 2  << nl;
            }
            else
            {
                r--;
                cout << r /2 << " " << r/ 2 << nl;
            }
            continue;
        }
        if (divisor(r) == -1)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << divisor(r) << " " << r - divisor(r) << nl;
        }
    }
    return 0;
}