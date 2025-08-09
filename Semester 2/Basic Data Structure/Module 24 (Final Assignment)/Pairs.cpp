#include <bits/stdc++.h>
using namespace std;

// we need a comparator class for comparing and remember it works opposite to normal comparator

class cmp
{
    public:
    bool operator()(pair<string, int> l, pair<string, int> r)
    {
        if (l.first > r.first)
            return true;
        else if (l.first < r.first)
            return false;
        else
            return l.second < r.second;
    }
};
int main()
{
    int tc;
    cin >> tc;
    // we are creating a set to sort and store these pair
    priority_queue<pair<string, int>, vector<pair<string, int>>,  cmp> pq;
    
    
    while (tc--)
    {
        string name;
        int value;
        cin >> name >> value;

        //declaring pair
        pair<string, int> pr;

        pq.push({name, value});

    }

    while (!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
    return 0;
}