// problem link : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
using namespace std;

int main ()
{
    fastIO();
    
    int n, m;
    cin >> n >> m;

    multiset<int> ml;

    int cnt = n + m;
    while(cnt --)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }

    for(auto el : ml)
    {
        cout << el << " ";
    }
    return 0;
}