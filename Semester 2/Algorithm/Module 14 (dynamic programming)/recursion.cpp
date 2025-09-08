#include <bits/stdc++.h>
using namespace std;

int  rec(int i)
{
    if (i == 1)
        return 1;
    return i * rec(i - 1);
}
int main()
{
    cout << rec(5) << endl;
    return 0;
}