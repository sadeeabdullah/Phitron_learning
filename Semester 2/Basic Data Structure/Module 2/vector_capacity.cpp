#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 3, 4, 4, 53};
    cout << v.size() << endl; // TC: O(1);
    cout << v.max_size() << endl;// TC: O(1);
    cout << v.capacity() << endl;// TC: O(1);
    v.push_back(4);
    cout << v.capacity() << endl; // TC: O(1);
    v.push_back(4);
    cout << v.capacity() << endl; // TC: O(1);
    v.push_back(4);
    cout << v.capacity() << endl; // TC: O(1);

    //if we pushback element in vector then the capacity will be twice when the current capacity  is full.

    v.clear(); // TC: O(N) --> it makes the vector size 0 and do not delete the memory when we push_back any element it rewrite the element on top of these

    cout << v.size() << endl; // output: 0;

    cout << v.empty() << endl; // return that the vector empty or not . --> TC: O(1)

    v.resize(7); //TC: O(k) --> k = abs(newsize - current size)
    cout << v.size() << endl; // output: 7;
    v.resize(8, 100);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; //output: 0 0 0 0 0 0 0 100 
    }
    cout << endl;
    
    return 0;
}