#include<bits/stdc++.h>
using namespace std;



int maxArray_sum(vector<int> a)
{
    int ans = 0;
    int n = a.size();

    // we will use nested for loop
    for(int i = 0 ; i < n; i++)
    {
        int currsum = 0;
        for(int j = i; j < n; j++)
        {
            currsum += a[j];
            ans = max(currsum, ans);
        }
    }
    return ans;
}
int main()
{
    vector<int> a = {2, 3, -8, 7, -1, 2, 3};
    cout << maxArray_sum(a) << endl;
    return 0;
}