#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; //TC : O(1)
    vector<int> v(n); //TC: O(N)
    for (int i = 0; i < n; i++) //TC: O(N)
    {
        cin >> v[i];
    }
    
    int count = 0; //TC: O(1)
    for (int i = 0; i < n; i++) // TC: O (N * N)
    {
        if(find(v.begin(),v.end(),v[i] + 1) != v.end() ) // TC: O(N)
        {
            count++;
        }
    }
    
    cout << count << endl;//TC : O(1)
    return 0;
}