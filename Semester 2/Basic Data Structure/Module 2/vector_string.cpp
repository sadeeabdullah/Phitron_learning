#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore(); 

    //making vector of string
    vector<string>  v(n);
    
    //taking input of string of vector
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }

    for (string x: v)
    {
        cout << x << endl;
    }
    
    
    return 0;
}