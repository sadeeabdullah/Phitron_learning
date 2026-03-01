		
// /* Bismillah hir rahmanir rahim */

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define llmax LLONG_MAX
// #define nl '\n'
// #define rall(var) (var).rbegin(), (var).rend()
// #define all(var) (var).begin(), (var).end()
// const ll Mod = 1e9 + 7;

// void Puzzle_Out()
// {
//     int n, k;	cin >> n >> k;
//     map<int,int> mp;
//     std::vector<int> a(n);
//     for(int i = 0 ; i < n; i++){
//     	cin>> a[i];
//         mp[a[i]]++;
//     }

//     int firstElement =  a[0];
//     vector<int> ex;
//     for(auto [x, y] : mp){
//         if(x == firstElement)   continue;
//         ex.push_back(y);
//     }
//     sort(all(ex));
//     int ans =mp.size();
//     for(int i = 0; i < ex.size() &&  k > 0; i++)
//     {
//         if(k >= ex[i]){
//             k -= ex[i];
//             ans--;
//         }
//     }
//     cout << ans << nl;
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t = 1;
//     cin >> t;
//     for (int tc = 1; tc <= t; tc++)
//         Puzzle_Out();

//     return 0;
// }
// /* author : Sadee Abdullah */ 



// alterante 
        
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
    int n, k;
    cin   >> n>>k;
    std::vector<int> a(n);
    for(int &i:a)cin>>i;
    map<int,int>mp;
    for(auto val:a)mp[val]++;
    mp.erase(a[0]);
    int ans = 1;
    vector<pair<int,int>> vp;
    for(auto [x, y]: mp){
        vp.push_back({y,x});
    }
    sort(all(vp));
    for(auto [y, x] :vp){
        int mn = min(y,k);
        mp[x]-=mn;
        k-=mn;
        if(mp[x]== 0)mp.erase(x);
        if(k==0)break;
    }
    ans+=mp.size();
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