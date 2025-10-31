// problem link : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B

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

    vector<int> n_vec(n + 1);
    loop(1, n, i)
    {
        cin >> n_vec[i];
    }
    
    vector<int> m_vec(m + 1);
    loop(1, m, i)
    {
        cin >> m_vec[i];
    }


    vector<int> ans;
    int i = 1, j = 1;
    int op = 0;
    while(j < m + 1)
    {
        if (i < n + 1 && n_vec[i] < m_vec[j])
        {
            op++, i++;
        }
        else
        {

            cout << op << " ";
            j++;
        }

    }

    return 0;
}