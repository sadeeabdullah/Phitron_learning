// problem link : https://codeforces.com/problemset/problem/735/D

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

bool isPrime (int n)
{
    for(int i = 2; i* i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main ()
{
    fastIO();
 
    // here we need to know a conjecture(not proved but it works): we can always split an even value into two prime number , so in this problem if we get a even value the answer would be two
    // if we have the number already a prime then the answer would be 1 because the biggest divisor of prime number is one
    // and if we have an odd number then we have to check if we substract two from the number if the number become prime then the answer will be two again
    // and if the after substracting the number with 2 it doesnot become prime then we have to try it with 3 because we know that substracting odd value from odd value we get an even  value and for even value we will get 2 and three is already prime so the total answer would be 3


    tInt(n);
    if(isPrime(n))
    {
        cout << 1 << nl;
    }
    else if (n % 2 == 0)
    {
        cout << 2 << nl;
    }
    else if (isPrime(n - 2))
    {
        cout << 2 << nl;
    }
    else
    {
        cout << 3 << nl;
    }
    return 0;
}