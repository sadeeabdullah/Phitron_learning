#include<bits/stdc++.h>
using namespace std;


int maxArraySum(vector<int> a)
{
    int n= a.size();

    int res = 0, maxEnding = 0;
    for(int i = 0;i < n; i++)
    {
        maxEnding = max(maxEnding + a[i], a[i]);
        res = max(maxEnding,res);
    }
    return res;
}
int main()
{
    vector<int> a = {2, 3, -8, 7, -1, 2, 3};
    cout << maxArraySum(a) <<endl;
    return 0;
}