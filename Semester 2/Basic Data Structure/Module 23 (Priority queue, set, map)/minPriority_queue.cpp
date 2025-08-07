#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(100);
    pq.push(40);
    pq.push(70);
    pq.push(5);
    pq.pop();
    cout << pq.top() << endl;
    return 0;
}