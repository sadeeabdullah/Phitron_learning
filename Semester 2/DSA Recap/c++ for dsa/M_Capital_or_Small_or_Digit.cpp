#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char x;
    cin >> x;
    if (x >= 'A' && x <= 'Z')
        cout << "ALPHA\nIS CAPITAL" << '\n';
    else if (x >= 'a' && x <= 'z')
        cout << "ALPHA\nIS SMALL" << '\n';
    else if (x >= '0' && x <= '9')
        cout << "IS DIGIT" << '\n' ;
    return 0;
}