// problem llink : https://codeforces.com/problemset/problem/368/B


// #include <bits/stdc++.h>
// #define ll long long int
// #define nl '\n'
// #define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
// using namespace std;

// int main ()
// {
//     fastIO();
    

//     int n, m;
//     cin >> n >> m;
//     vector<int> arr(n + 1);
//     for(int i = 1; i <= n; i++)
//         cin >> arr[i];                           // WE WILL GET TLE ON  IT 10^10

//     while (m--)
//     {
//         int val;
//         cin >> val;

//         set<int> s;

//         for(int i = val; i <= n; i++)
//         {
//             s.insert(arr[i]);
//         }

//         cout << s.size() << nl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    

    // NOW TO IGNORE THE TLE WE HAVE TO PRECALCULATE THE DISTINCT ELEMENT SIZE


    int n, m;
    cin >> n >> m;
    vector<int> arr(n + 1);
    for(int i = 1; i <= n; i++)
        cin >> arr[i];

    set<int> s;

    vector<int> ans(n + 1);

    for(int i = n; i > 0; i--)
    {
        s.insert(arr[i]);

        ans[i] = s.size();
    }

    while (m--)
    {
        int val;
        cin >> val;

        cout << ans[val] << nl;
    }
    return 0;
}