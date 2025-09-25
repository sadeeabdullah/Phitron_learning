#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    char s;

    cin >> a >> s >> b;
    if (s == '>')
        cout << ((a > b) ? "Right\n" : "Wrong\n");
    else if (s == '<')
        cout << ((a < b) ? "Right\n" : "Wrong\n");
    else if (s == '=')
        cout << ((a == b) ? "Right\n" : "Wrong\n");
    return 0;
}