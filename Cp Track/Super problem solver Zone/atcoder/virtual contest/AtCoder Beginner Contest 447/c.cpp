		
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
    string s, t;
    cin >> s >> t;
    int n=s.size(), m = t.size();
    std::vector<int> a_a, a_b;
    string a_ex_s, a_ex_t;

    int cnt =0;
    for(char c : s){
        
        if(c != 'A'){a_ex_s.push_back(c);a_a.push_back(cnt); cnt= 0;}
        else{
            cnt++;
        }
    }
    a_a.push_back(cnt);

    int cnt2 =0;
    for(char c : t){
        if(c != 'A'){a_ex_t.push_back(c);a_b.push_back(cnt2); cnt2= 0;}
        else{
            cnt2++;
        }
    }
    a_b.push_back(cnt2);

    if(a_ex_s != a_ex_t){
        cout <<-1<<nl;
        return;
    }   
    // for(auto val : a_a)cout<<val<<" ";
    // cout<<nl;
    // for(auto val : a_b)cout<<val<<" ";
    // cout<<nl;

    int ans = 0 ;
    for (int i = 0; i < a_a.size(); ++i)
    {
        ans+= abs(a_a[i] -  a_b[i]);
    }
    cout<<ans<<nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    for (int tc = 1; tc <= t; tc++)
        Puzzle_Out();

    return 0;
}
/* author : Sadee Abdullah */ 