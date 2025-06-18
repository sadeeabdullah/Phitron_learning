#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;                   // type one. TC: O(1)
    vector<int> v1(10);                // vector <int> v1(10); --> type two. TC: O(N)
    vector<int> v2(10, -1);           // vector<int> v2(n,v) --> type three. TC: O(N)
    vector<int> v3(v2);              //type four --> TC: O(N)
    int a[3] = {1, 2, 4};
    vector<int> v4(a, a + 3);       // type five --> TC: O(N)
    vector<int> v = {1, 2, 3, 4, 6};

    for (int i = 0; i <v4.size(); i++)
    {
        cout << v4[i] << endl;
    }
    
    return 0;
}