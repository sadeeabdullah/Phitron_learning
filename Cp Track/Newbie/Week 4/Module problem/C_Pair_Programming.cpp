// problem link : https://codeforces.com/problemset/problem/1547/C


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define testCase{} int tc; cin >> tc; while(tc--)
using namespace std;

int main ()
{
    fastIO();
 
    testCase
    {
        int k, n, m;
        cin >> k >> n >> m;

        queue<int> a, b;
        loop(1,n, i)
        {
            int x;
            cin >> x;
            a.push(x);
        }
        loop(1,m, i)
        {
            int x;
            cin >> x;
            b.push(x);
        }

        vector<int> order;

        bool possible = true;
        while(a.size() > 0 || b.size() > 0)
        {
            int x = -1, y = -1;

            if (!a.empty())
            {
                x = a.front();
            }
            if (!b.empty())
            {
                y = b.front();
            }

            if (x == 0)
            {
                a.pop();
                k++;
                order.push_back(x);
                continue;
            }

            if (y == 0)
            {
                b.pop();
                k++;
                order.push_back(y);
                continue;
            }


            if (x > 0 && y > 0)
            {
                    if (x <= k)
                    {
                        a.pop();
                        order.push_back(x);
                        continue;
                    }
                    if (y <= k)
                    {
                        b.pop();
                        order.push_back(y);
                        continue;
                    }
                    
                        cout <<  -1 << nl;
                        possible = false;
                        break;
                    
            }
            



            if (x > 0)
                {
                    if (x <= k)
                    {
                        a.pop();
                        order.push_back(x);
                    }
                    else
                    {
                        cout <<  -1 << nl;
                        possible = false;
                        break;
                    }
                    continue;
                }
            if (y > 0)
                {
                    if (y <= k)
                    {
                        b.pop();
                        order.push_back(y);
                    }
                    else
                    {
                        cout <<  -1 << nl;
                        possible = false;
                        break;
                    }
                    continue;
                }
        }

        if(possible)
        {for (auto val : order)
        {
            cout << val << " ";
        }
        cout << nl;}
    }



    return 0;
}
