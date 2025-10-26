//problem link : https://cses.fi/problemset/task/1163j

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
    cin >>n >> m;
    // multiset for length
    multiset<int> lengths;
    // set for the traffic lights;
    set<int> positions;
    positions.insert(0);
    positions.insert(n);
    lengths.insert(n);
    while (m--)
    {
        int added;
        cin >> added;
        positions.insert(added);
        auto iter = positions.find(added);
        int prevVal = *prev(iter);
        int nextVal = *next(iter);
        lengths.erase(lengths.find(nextVal - prevVal)); // erasing the value that was before the traffic lite added
        lengths.insert(added-prevVal);
        lengths.insert(nextVal - added);
        cout << *lengths.rbegin() << " ";
    }
    return 0;
}