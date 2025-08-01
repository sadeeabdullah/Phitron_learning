#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pair<string, int> p;
    // //p = make_pair("sadee", 100);
    // p = {"sadee", 100};
    // cout << p.first << " " << p.second << endl;

    //making a vector pair
    int n; 
    cin >> n;
    vector<pair<int, int> > v(n);

    //taking input of the pair
    for (int i = 0; i < n ; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < n ; i++)
    {
        cout << v[i].first << " " <<  v[i].second << endl;
    }
    return 0;
}