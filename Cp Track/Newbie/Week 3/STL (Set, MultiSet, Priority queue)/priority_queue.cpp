// priority queue

// 1. sorted (Non decreasing / non increasing) {duplicate can be here}


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
 
    priority_queue<int> pq;     // default(max heap)
    pq.push(5);                 // LOG N
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(7);


    cout << pq.top() << nl;       // o(1);
    
    pq.pop();                   // LOG N
    cout << pq.top() <<nl;

    cout << pq .size() << nl;
    cout<< pq.empty() <<nl;



    cout<< nl << nl << nl << nl;
    priority_queue<int, vector<int>, greater<int>> pq_min;     // default(max heap)
    pq_min.push(5);                 // LOG N
    pq_min.push(2);
    pq_min.push(3);
    pq_min.push(4);
    pq_min.push(7);
    pq_min.push(7);


    // cout << pq_min.top() << nl;       // o(1);
    
    // pq_min.pop();                   // LOG N
    // cout << pq_min.top() <<nl;

    // cout << pq_min .size() << nl;
    // cout<< pq_min.empty() <<nl;

    pq_min.pop();

    while (!pq_min.empty())
    {
        cout << pq_min.top() << nl;
        pq_min.pop();
    }

    return 0;
}
