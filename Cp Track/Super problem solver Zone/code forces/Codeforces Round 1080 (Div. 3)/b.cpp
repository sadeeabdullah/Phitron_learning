		
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
    int n;	cin >> n;
    std::vector<int> a(n + 1);
    for(int i = 1; i <= n; i++){
    	cin >> a[i];
    }
    
    bool possible = true;
    for(int i =  1; i <=n; i++){
        if(a[i] == i)   continue;

        // checking on the left
        int j =  i ;
        bool f = false;
        while(j <= n){
            if(a[j] == i){
                f = true;
                break;
            }
            j*=2;
        }

        j = i ;
        // bool s = false;
        while(j > 0){
            if(a[j] == i){
                f = true;
                break;
            }
            j /= 2;
        }

        if(!f){
            possible = false;
            break;
        }
        
    }

    cout <<((possible)? "YES" : "NO")  << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t ;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
        Puzzle_Out();

    return 0;
}
/* author : Sadee Abdullah */ 