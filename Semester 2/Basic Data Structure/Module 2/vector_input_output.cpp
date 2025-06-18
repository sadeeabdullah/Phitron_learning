#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n); // vector that has n elements

    //taking the input of vector elements
    for (int i = 0; i <v.size(); i++)
    {
        cin >> v[i];
    }

    //showing vector output
    for (int i = 0; i <v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    //BUT IF WE DONT KNOW THE ELEMENT COUNT OF VECTOR THEN?
    vector<int> v2;
    int x ;
    while(cin >> x)
    {
        v2.push_back(x);
    }

    for(int x : v2)
    {
        cout << x << " " ;
    }
    
    return 0;
}