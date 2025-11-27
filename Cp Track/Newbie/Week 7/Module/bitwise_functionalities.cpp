//Bismillah hir rahmanir rahim
//keep Patience, Destiny is more beautiful


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
#define tInt(var) int var; cin >> var;
#define tLL(var)  ll var;  cin >> var;
#define tStr(var) string var; cin >> var;
#define testCase int t; cin >> t; while(t--)

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;




// check bit on or off
// print_on_and_off_bits
// turn_on_kth_bit
// turn_off_kth_bit
// toggle_kth_bit


int  kth_bit_on_off(int n, int  k)
{
    return  ((n >> k) & 1) ;
}

void print_on_and_off_bits(int n)
{
    // everytime we will right shift and do and with bit to check if it is on or off

    for(int k = 7; k >= 0 ; k--)
    {
        if(kth_bit_on_off(n,k))
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
    cout << nl;
}   

int turn_on_kth_bit(int n, int k)
{
    return n | (1 << k);
}

int turn_off_kth_bit(int n, int k)
{
    return n &( ~(1 << k)); // first doing not operation inside the doing and operation OR you can use XOR operator
    // return n ^ (1 << k);
}
void solve()
{
    // check kth bit on or off?=
    int on_off = kth_bit_on_off(45,  2);
    cout << on_off << nl;

    // print the on off bits
    print_on_and_off_bits(45);


    // turn on kth bit
    int x = turn_on_kth_bit(45, 4);
    cout << x << nl;

   // turn off kth bit
   int y = turn_off_kth_bit(61,4);
   cout << y << nl;
}
int main ()
{
    fastIO();
    solve();
    return 0;
}