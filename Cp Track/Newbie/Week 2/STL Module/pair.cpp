#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    
    pair<string, int> student;
    student = make_pair("rahim", 12);
    cout << student.first << " " << student.second << nl;
    student = {"karim",3};
    cout << student.first << " " << student.second << nl;

    auto[name, roll] = student;
    cout << name << " " << roll << nl;
    

    // changing the name or roll
    student.first = "habib";
    cout << student.first << nl;


    // say we have many student then we can make an array of pair
    int n;
    cin >> n;

    pair<string, int> students[n];// it is an array of pair

    for(int i = 0;i < n; i++)
        cin >> students[i].first >> students[i].second;

    //range base for loop for printing;
    for (auto [x, y] : students)
    {
        cout << x << " -> " << y << nl;
    }

    // if you want to store more than two value in pair
    pair<string, pair<int, string>> p = {"rahim", {5, "0133"}};

    cout << p.first << " " << p.second.first << " " << p.second.second << nl;

    return 0;
}