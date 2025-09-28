#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int val[1005];

// creating the subset funtion
bool subset_sum(int i, int sum)
{
    if (i < 0)
    {
        if (sum == 0)
        {

            return true;
        }
        else
        {
            return false;
        }
    }

    if (val[i] <= sum)
    {

        bool op1 = subset_sum(i - 1, sum - val[i]);
        bool op2 = subset_sum(i - 1, sum);
        return op1 || op2;
    }
    else
    {
        return subset_sum(i - 1, sum);
    }
}
int main()
{
    fastIO();

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> val[i];

    int sum;
    cin >> sum;
    bool isPossible = subset_sum(n - 1, sum);

    cout << ((isPossible) ?  "YES" : "NO") << nl;
    return 0;
}