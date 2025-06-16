#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char s, eq;
    cin >> a >>  s >> b >> eq >> c;
    if (s == '+')
    {
        (a + b == c) ? cout << "Yes" : cout << a + b;
    }
    else if (s == '-')
    {
        (a - b == c) ? cout << "Yes" : cout << a - b;
    }
    else if (s == '*')
    {
        (a * b == c) ? cout << "Yes" : cout << a * b;
    }
    return 0;
}