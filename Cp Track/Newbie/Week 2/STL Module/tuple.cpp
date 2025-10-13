#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    
    // tuple can store more than 2 data
    // tuple<string, int, string> t = make_tuple("rahim", 10, "0134");
    tuple<string, int, string> t = {"rahim", 10, "0134"};

    // we can get the value this way
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << nl;

    // or here is the more efficient way
    auto[name, roll, phoneNumber] = t;
    cout << name << " " << roll << " " << phoneNumber << nl;

    /// making an array of tuple with 4 values
    int n;
    cin >> n;

    tuple<string, string, int, int> employes[n];
    for(int i = 0; i < n; i++)
    {
        cin >> get<0>(employes[i]) >> get<1>(employes[i]) >> get<2>(employes[i]) >> get<3>(employes[i]);
    }

    for (auto [name, dept, id, salary] : employes)
    {
        cout << name << " " << dept << " " << id << " " << salary << nl;
    }
    return 0;
}