// PROBLEM LINK :   https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/H
// Bismillah hir rahmanir rahim
// keep Patience, Destiny is more beautiful

#include <bits/stdc++.h>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
#define Ek1takeDekhe9ibo  int t; cin >> t;while (t--)
#define thakbenaDada return 0

using namespace std;

void EktakeDekhi()
{
    string s;   cin >> s;
    map<char,ll> mp;
    for(auto ch : s) mp[ch]++;
    ll needBread = mp['B'];
    ll needSausage = mp['S'];
    ll needCheese = mp['C'];
    ll stockBread, stockSausage, stockCheese;   cin >> stockBread >> stockSausage >> stockCheese;
    ll breadPrice, sausagePrice, cheesePrice;   cin >> breadPrice >> sausagePrice >> cheesePrice;
    ll tk;  cin >> tk;

    auto ok = [&](ll burgers){
        ll needMoney = 0;
        ll totalB = needBread * burgers, totalS = needSausage * burgers, totalC = needCheese * burgers;
        if(totalB > stockBread){
            needMoney += (totalB - stockBread)  * breadPrice;
        }
        if(totalS > stockSausage){
            needMoney += (totalS -stockSausage) * sausagePrice;
        }
        if(totalC > stockCheese){
            needMoney += (totalC - stockCheese) * cheesePrice;
        }
        return needMoney <= tk;
    };
    ll l = 0, r = 2e12, ans,mid;
    while(l <= r){
        mid = l + (r-l) /2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }else r = mid - 1;
    }
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

        EktakeDekhi();
    thakbenaDada;
}
/* author : Sadee Abdullah */ 