// problem link:  https://codeforces.com/problemset/problem/1579/E1

// video solution : https://www.youtube.com/watch?v=uPpA8GIGbkI


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
        vector<int> arr(n);
        for (int i = 0; i <n; i++)
            cin >> arr[i];

        deque<int> dp;

        
        dp.push_back(arr[0]);
        
        for (int i = 1;i < n;i++)
        {
                if(dp.front()> arr[i])
                    dp.push_front(arr[i]);
                else
                    dp.push_back(arr[i]);
        }

        for (int val : dp)
        {
            cout << val << " ";
        }
        cout << nl;
    }
    return 0;
}