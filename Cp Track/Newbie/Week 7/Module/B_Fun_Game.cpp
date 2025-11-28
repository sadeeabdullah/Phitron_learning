// problem link : https://codeforces.com/problemset/problem/1994/B

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
#define tStr(var) string var; cin >> var;
#define testCase int t; cin >> t; while(t--)

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
   int n;
   cin >> n;
   string s, t;
   cin >> s >> t;

   // key observation :
   // if we have 1 at the first of the s string then obtaining the t string is possible by doing xor operation
   // else look for the first 1 in s and no mismatch should be there before the first one if mismatch caught then not possible if not caught then possible
   // try with some of the test case on paper


   cout << ((s.find('1') > t.find('1')) ? "NO" : "YES") << nl;

}
int main ()
{
    fastIO();
    testCase{

        solve();
    }
    return 0;
}
// // problem link : https://codeforces.com/problemset/problem/1994/B

// //Bismillah hir rahmanir rahim
// //keep Patience, Destiny is more beautiful


// #include <bits/stdc++.h>

// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

// #define ll long long int
// #define llmax LLONG_MAX
// #define nl '\n'
// #define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
// #define yes cout << "YES"<< nl;
// #define no cout << "NO" << nl;
// #define loop(start, end,var) for (int var = (start); var <= (end); var++)
// #define rsORT(var) sort(var.rbegin(), var.rend())
// #define sORT(var) sort(var.begin(), var.end())
// #define tStr(var) string var; cin >> var;
// #define testCase int t; cin >> t; while(t--)

// using namespace __gnu_pbds;

// using namespace std;

// template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


// void solve()
// {
//    int n;
//    cin >> n;
//    string s, t;
//    cin >> s >> t;

//    // key observation :
//    // if we have 1 at the first of the s string then obtaining the t string is possible by doing xor operation
//    // else look for the first 1 in s and no mismatch should be there before the first one if mismatch caught then not possible if not caught then possible
//    // try with some of the test case on paper


//    if(s[0] == '1')
//    {
//         yes;
//         return;
//    }

//    bool isCaught = false;

//    for(int i = 0; i < n; i++)
//    {
//         if(s[i] == '1')
//         {
//             break;
//         }
//         if(s[i] != t[i])
//         {
//             isCaught = true;
//             break;
//         }
//    }

//    if(isCaught)
//    {
//         no;
//    }
//    else
//    {
//     yes;
//    }

// }
// int main ()
// {
//     fastIO();
//     testCase{

//         solve();
//     }
//     return 0;
// }