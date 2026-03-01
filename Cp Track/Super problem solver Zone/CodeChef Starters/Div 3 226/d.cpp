        
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
    int n;  cin >> n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    sort(all(a));
    for(int i = 0; i < n-1; i++)while(a[i] *2<=a[n-1]) a[i]*=2;
    sort(all(a));
    int ans=a[n-1]-a[0];
    for(int i =0; i<n-1;i++)  ans =min(ans, (a[i] *2)-a[i+1]);
    cout<<ans<<nl;
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