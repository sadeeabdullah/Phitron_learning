#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
    fastIO();
    
    string s,x;
    getline(cin, s);
    cin >> x;

    int cnt = 0;
    // while (s.find(x) != -1)
    // {
    //     cnt++;
    //     s.replace(s.find(x), x.length(), " ");
    // }

    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        if (word == x) cnt++;
    }
    

    cout << cnt << nl;
    return 0;
}