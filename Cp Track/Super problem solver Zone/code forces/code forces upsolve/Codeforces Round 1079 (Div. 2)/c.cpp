		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;


void Puzzle_Out()
{
    ll p, q;
    cin >> p >> q;

    if(p >= q){
    	cout << "Alice" << nl;
    	return;
    }


    // let's reduce the numbers to basics

    if(3 *p >= 2 * q ){
    	cout << "Bob" << nl;
    }else	cout << "Alice" << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
        Puzzle_Out();

    return 0;
}
/* author : Sadee Abdullah */ 