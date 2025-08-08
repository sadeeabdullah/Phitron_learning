#include <bits/stdc++.h>
using namespace std;
int main()
{
    // set makes unique and sorted any thing behind works BST
    // it is the STL for Binary Search Tree

    set<int> s;
    int n; 
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val); // O(log N) but we know in bst it could be O(n) but set any how make it balanced bst so always the Time complexity is O(log N)

    }

    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << endl;

    // you can't reversely or decendantly sort
    // what you can do is input the set in vector then reverse


    // is the value available on the set?? here is the way to find
    if (s.count(100)) /// log N
        cout << " ache ";
    else 
        cout << "nai";
    return 0;
}