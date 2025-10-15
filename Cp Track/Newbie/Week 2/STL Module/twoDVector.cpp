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
    vector<vector<int>> v(n);

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> a(m);
        for (int j = 0; j < m; j++)
        {
            cin >> a[j];
        }
        v[i] = a;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << nl;
        
    }


    int string_sz;
    cin >> string_sz;
    vector<string> v_string(string_sz);
    for(int i = 0; i < string_sz; i++)
    {
        cin >> v_string[i];
    }

    for(int i = 0; i < string_sz; i++)
    {
        cout << v_string[i] << nl;
    }
    
    return 0;
}