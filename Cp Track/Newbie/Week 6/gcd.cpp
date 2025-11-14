// GCD -> GREATEST COMMON DIVISOR


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

// int gcd(int n, int m)        //  EUCLEDEAN ALGORITHM
// {
//     while(m != 0)
//     {
//         int tmp = m;
//         m = n % m;
//         n = tmp;
//     }
//     return n;
// }



int GCD(int a, int b)
{
    return __gcd(a, b);             // O(log(min(a, b)))
}
int main ()
{
    fastIO();
 
    tInt(n);
    tInt(m);

    cout << GCD(n, m) << nl;
    return 0;
}