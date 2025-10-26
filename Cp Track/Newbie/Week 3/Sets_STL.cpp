// problem link : https://www.hackerrank.com/challenges/cpp-sets/problem

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "Yes"<< nl;
#define no cout << "No" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
using namespace std;

int main ()
{
    fastIO();
    int q;
    cin >> q;
    set<int> s;
    while(q--)
    {
        int a, x;
        cin >> a >> x;
        if (a == 1)
        {
            s.insert(x);
        }
        else if (a == 2)
        {
            auto it = s.find(x);
            if (it != s.end())
            {
                s.erase(it);
            }
        }
        else if (a == 3)
        {
            if (s.find(x) != s.end())
            {
                yes;
            }
            else   
                no;
        }
    }
    return 0;
}