// problem link :https://codeforces.com/problemset/problem/1506/D

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        map<int,int> mp;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            mp[x]++;
        }

        //  ALWAYS MAKE PAIR WITH MOST COUNT ELEMENT NOW WE WILL MAKE PAIR WITH MOST COUNT ELEMENT DYNAMICALLY TO GET THE MOST PAIR AND MINIMUM SIZE

        priority_queue<int> pq;
        for(auto [x, y] : mp)
        {
            pq.push(y);
        }

        while(!pq.empty())
        {
            if(pq.size() < 2)
                break;
            int x, y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();

            x--, y--;
            if(x > 0)
                pq.push(x);
            if(y > 0)
                pq.push(y);
        }

        int ans = 0;
        while(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << nl;

    }
    return 0;
}