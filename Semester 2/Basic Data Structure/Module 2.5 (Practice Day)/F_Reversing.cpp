#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n; //TC: O(N)
    vector<int> v(n); // TC: O(N)
    for (int i = 0; i < n; i++) // TC: O(N)
    {
        cin >> v[i];
    }

    reverse(v.begin(), v.end());// TC: O(N)
    for (int x: v)
    {
        cout << x << " " ;
    }
    
    
    return 0;
}