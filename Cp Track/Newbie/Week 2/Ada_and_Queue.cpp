// problem link : https://www.spoj.com/problems/ADAQUEUE/en/


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
 
    int q;
    cin >> q;
    deque<int> dp;
    bool reversed = false;
    while(q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "push_back")
        {
            int x;
            cin >> x;

            if (!reversed)
            {
                dp.push_back(x);
            }
            else
            {
                dp.push_front(x);
            }
        }
        else if (cmd == "toFront")
        {
            int x;
            cin >> x;
            if (reversed)
            {
                dp.push_back(x);
            }
            else
            {
                dp.push_front(x);
            }
        }
        else if (cmd == "reverse")
        {
            reversed = !reversed;
        }
        else if (cmd == "front")
        {
            if (dp.empty())
                cout << "No job for Ada?" <<nl;
            else
            {
                if (reversed)
                {
                    cout << dp.back() << nl;
                    dp.pop_back();
                }
                else
                {
                    cout <<dp.front() << nl;
                    dp.pop_front();
                }
            }
        }
        else if (cmd == "back")
        {
            if (dp.empty())
                cout << "No job for Ada?" <<nl;
            else
            {
                if (!reversed)
                {
                    cout << dp.back() << nl;
                    dp.pop_back();
                }
                else
                {
                    cout <<dp.front() << nl;
                    dp.pop_front();
                }
            }
        }

    }
    return 0;
}