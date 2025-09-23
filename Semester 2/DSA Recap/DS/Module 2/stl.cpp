#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {10,12, 12, 34122};
    vector<int> v(a, a + 2);

    for (int a : v)
        cout << a << ' ';

    return 0;
}