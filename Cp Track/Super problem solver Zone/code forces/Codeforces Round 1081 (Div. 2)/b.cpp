		
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
    string s;
    cin >> s;
    int ones = count(s.begin(), s.end(), '1');
    int zeros = n - ones;
    if(ones % 2 == 0){
        cout << ones << nl;
        if(ones > 0){
            for(int i = 0; i < n;i++)
                if(s[i] == '1') cout << i + 1 << " ";
            cout << nl;
        }
    }else if(zeros % 2){
        cout << zeros << nl;
        for(int i = 0; i < n;i++)
            if(s[i] == '0') cout << i + 1 << " ";
        cout << nl;
    }else{
        cout << -1 << nl;
    }
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