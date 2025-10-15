// it double ended queue and the main pros is we can push or pop element in O(1) time complexity

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
    deque<int> d(n);
    for (int i = 0; i < n; i++)
        cin >> d[i];
    
    for (int val : d)
        cout << val << " ";
    cout << nl;
    
    d.push_front(4);
    d.pop_front();
    d.push_front(5);
    
    for (int val : d)
        cout << val << " ";
    cout << nl;

    return 0;
}