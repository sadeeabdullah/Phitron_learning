// problem link : https://codeforces.com/problemset/problem/501/B

// #include <bits/stdc++.h>
// #define ll long long int
// #define nl '\n'
// #define fastIO()                 \
//     ios::sync_with_stdio(false); \
//     cin.tie(NULL);
// using namespace std;

// int main()
// {
//     fastIO();
//     int n;
//     cin >> n;
//     map<string, string> ans, has;

//     for (int i = 1; i <= n; i++)
//     {
//         string a, b;
//         cin >> a >> b;

//         if (has.find(a) != has.end())
//         {
//             string s = has[a];
//             ans[s] = b;
//             has.erase(a);
//             has[b] = s;
//         }
//         else
//         {
//             ans[a] = b;
//             has[b] = a;
//         }
//     }

//     cout << ans.size() << nl;
//     for (auto [x, y] : ans)
//     {
//         cout << x << " " << y << nl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

vector<pair<string, string>> v;

int usrNameFind(string oldUsernm)
{
    for (int i =0; i < v.size(); i++)
    {
        if (v[i].second == oldUsernm)
        {
            return i;
        }
    }
    return -1;
}
int main ()
{
    fastIO();

 

    int n;
    cin >> n; 
    for (int i = 1; i <= n; i ++)
    {
        string a, b;
        cin >> a >> b;
        int idx = usrNameFind(a);

        if(idx != -1)
        {
            v[idx].second = b;
        }
        else
        {
            v.push_back({a, b});
        }
    }
    cout << v.size() << nl;
    for (auto[x, y] : v)
    {
        cout << x  << " " << y << nl;
    }
    return 0;
}