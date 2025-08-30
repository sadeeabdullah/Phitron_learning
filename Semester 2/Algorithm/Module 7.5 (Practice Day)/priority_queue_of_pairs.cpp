#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({10,1}); // as you see the output in the pair of pq if you set the ascending or min priority queue then it sort on the basis of the first data of pair
    pq.push({5,2});

    cout << pq.top().first << " " << pq.top().second << endl;
    return 0;
}