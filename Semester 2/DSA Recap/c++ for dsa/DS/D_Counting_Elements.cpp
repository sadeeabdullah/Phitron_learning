#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
    fastIO();
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int cnt =  0;
    for(int i = 0; i < n; i++)
    {
        if (find(arr.begin(), arr.end(), arr[i] + 1) != arr.end())
            cnt++;
    }

    cout << cnt << nl;
    return 0;
}