#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string x;
    cin >> x;

    int x_count = 0;
    while(s.find(x) != string::npos)
    {
        x_count ++;
        s.replace(s.find(x),x.length()," ");
    }
    // s.find(x);
    cout << x_count;
    return 0;
}