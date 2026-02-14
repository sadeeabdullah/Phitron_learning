/**
 * problem link : https://www.codechef.com/problems/XORRY2?tab=statement
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

bool kthBitOnOff(int num, int kth){
	return ((num >> kth) & 1);
}
void Puzzle_Out()
{
    int X;	cin >> X;

    /**
     * Approach: 
     * We are given a number X and we have represent it with the A and B and it should satisfies
     * some condition
     * 
     * so what we  got is to minimize B - A we have to make the B and A very close---- how?
     * 		lets assume x is 15 --> 0 1 1 1 1
     * 		what is the closest number that can remake the x?
     		8 and 7 right?
     		why?
     		do it on your own 
     		let see their bits
     				8 ---> 0 1 0 0 0
     				7 ---> 0 0 1 1 1
     				their xor makes x = 15

     		now we have to count how many other combination can be made using this and also make 
     		sure that  A or B must not exceed x

     		see the code it will help you more
     * **/

    int B = 1 << (__lg(X));
    int A = X ^ B;

    int ans = 0;		// we dont have to take any thing as answer first because when we have the 
    					// cnt 0 it will handle the case 1 << 0 to 1 already.
    int cnt = 0;
    int sum = B;
    for(int k = 0; k <= __lg(X); k++){
    	if(!kthBitOnOff(A,k) && !kthBitOnOff(B, k) && sum + (1 << k) <= X){
    		cnt++;
    		sum += (1 << k);
    	}
    }
    ans = (1 << cnt);
    cout << ans << nl;
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
