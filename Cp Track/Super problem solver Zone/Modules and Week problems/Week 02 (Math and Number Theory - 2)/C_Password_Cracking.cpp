/*problem link : https://codeforces.com/problemset/problem/2013/C*/
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;

int query(deque<char> &s){
    cout << "? ";
    for(auto ch : s)    cout << ch ;
    cout.flush();
    int x;  cin >> x;
    return x;
}

int answer(deque<char> &s){
    cout << "! ";
    for(auto ch : s)    cout << ch;
    cout << endl;
}
// 1001011
void Puzzle_Out()
{
    int n;  cin >> n;
    deque<char> s;
    while(s.size() < n){
        s.push_back('1');
        if(query(s))    continue;
        s.back() = '0';
        if(query(s))    continue;
        else {
            s.pop_back();
            break;
        }
    }

    while(s.size() < n){
        s.push_front('1');
        if(query(s))    continue;
        s.front() = '0';
    }

    answer(s);
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