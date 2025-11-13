//problem link ; https://cses.fi/problemset/task/1652/


#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define testCase{} int tc; cin >> tc; while(tc--)
#define tInt(var) int var; cin >> var;
#define tLL(var)  ll var;  cin >> var;
#define tStr(var) string var; cin >> var;

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main ()
{
    fastIO();
    
    tInt(n);
    tInt(q);
    vector<vector<int>> forest(n + 1, vector<int> (n + 1));
    vector<vector<int>> ans_forest(n + 1, vector<int> (n + 1));


    // taking input in the first array
    for(int i = 1; i <=n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            char s;
            cin >> s;
            if(s == '.')
            {
                forest[i][j] = 0;
            }
            else
            {
                forest[i][j] = 1;
            }
        }
    }


    // taking input of the forest
    int i = 0;
    for(int j = 0; j <= n; j++)
    {
        ans_forest[i][j] = 0;
    }   

     i = 1;
    for(int j = 0; j <= n; j++)
    {
        ans_forest[j][i] = 0;
    }   


    // making 2d prefix sum ans forest array
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            ans_forest[i][j] = forest[i][j] + ans_forest[i- 1][j] + ans_forest[i][j - 1] -ans_forest[i- 1][j - 1];
        }
    
    
    while (q--)
    {
        tInt(i1);
        tInt(i2);
        tInt(j1);
        tInt(j2);

        int res = ans_forest[j1][j2] + ans_forest[i1 - 1][i2 - 1] - ans_forest[i1 - 1][j2] - ans_forest[j1][i2 - 1];  
        cout <<res << nl;
    }
    
    return 0;
}