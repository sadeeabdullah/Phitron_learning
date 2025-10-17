// problem link :https://atcoder.jp/contests/abc066/tasks/arc077_a?lang=en


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    
    int n;
    cin >> n;
    vector<int> a_arr(n);
    for(int i = 0; i < n; i++)
        cin >> a_arr[i];

    deque<int> b_arr;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            b_arr.push_front(a_arr[i]);
        else
            b_arr.push_back(a_arr[i]);
    }

    for(int val : b_arr)
    {
        cout << val << " ";
    }
    cout << nl;

    return 0;
}