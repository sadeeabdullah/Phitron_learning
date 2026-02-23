		
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
//     int n;	cin >> n;
//     string s;
//     cin >> s;
//     string d = s + s;
//     int ans = 0;
//     for(int i = 0; i < n; i++){
//     	int b = 1;
//     	for(int j = i + 1; j < i + n; j++){
//     		if(d[j] != d[j - 1]){
//     			b++;
//     		}
//     	}
//     	ans = max(ans, b);
//     }
//     cout << ans<< nl;
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


        
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;

int countingBlock(string s){
    int block = 1;
    for(int i = 1; i < s.size(); i++){
        if(s[i] != s[i - 1])    block++;
    }
    return block;
}
void Puzzle_Out()
{
    int n;  cin >> n;
    string s;   cin >> s;
    int ans = countingBlock(s);
    if(s[0] != s[n - 1]) ans++;
    cout << min(n, ans) << nl;
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