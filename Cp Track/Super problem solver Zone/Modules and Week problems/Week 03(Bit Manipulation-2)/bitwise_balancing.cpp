/**
 * Problem link : https://codeforces.com/problemset/problem/2020/C
 * **/
		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;

bool kthBitOnOff(ll num, ll k){
	return ((num >> k) & 1);
}

ll turnOnKthBit(ll num, ll k){
	return (num | (1LL << k));
}

ll turnOffKthBit(ll num, ll k){
	return (num & (~(1LL << k)));
}
void Puzzle_Out()
{
    ll b, c, d;		cin >> b >> c >> d;

    /**
     *	APPROACH:	
     * 			For Understanding the approach you have to go through some dry run
     * 			First of You have to recall the basics of & and | operation and what will happen
     * 			if we use the substraction.
     * 			
     * 			Now we have to make the left side equal to right side also their bit will be same
     * 			after operations. Now you have to apply these basics to know what we have to do to
     * 			make the left == right.
     * 
     * 			The code below will help you to understand more. 
     **/


    ll a = b;
    ll msb = max({__lg(b), __lg(c), __lg(d)});
    for(ll k = 0; k <= msb; k++){
    	if(!kthBitOnOff(b,k) && kthBitOnOff(d, k)){				// if thats happen then we have to turn on the bit on a because in substraction the same element get removed
    		a = turnOnKthBit(a,k);
    	}

    	if(kthBitOnOff(c,k) && kthBitOnOff(d, k)){
    		a = turnOffKthBit(a,k);
    	}
    }

    // after this updation lets check if the condition is satisfied or not
    cout << (((a|b) - (a & c) == d) ? a : -1) << nl;
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