#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 432, 4};

    cout << v[0] << endl;
    cout << v.at(0) << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v[v.size() -1] << endl;
    return 0;
}