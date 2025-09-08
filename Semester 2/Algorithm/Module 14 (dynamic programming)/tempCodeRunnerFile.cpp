#include <bits/stdc++.h>
using namespace std;

int  rec(int i)
{
    if (i > 5)
        return 0;
    int sum = rec(i + 1);
    return sum + i;
}
int main()
{
    cout << rec(1) << endl;
    return 0;
}