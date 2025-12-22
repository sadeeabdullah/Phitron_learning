// problem link : https://codeforces.com/problemset/problem/1538/C
//Bismillah hir rahmanir rahim
//keep Patience, Destiny is more beautiful


#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define tStr(var) string var; cin >> var;
#define testCase int t; cin >> t; while(t--)

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;



// creating the binary search function to get the left range
int binaryLeft(vector<int> &a, int range, int startIdx)       // we have to use the refference otherwise copying the array would cost TLE
{
    int n = a.size();
    int ans = -1, l = startIdx, r= n - 1;
    while(l <= r)
    {
        // calculating the mid
        int mid = l + (r - l) / 2;
        if(a[mid] >= range)
        {
            ans = mid;  // mid can be the possible answer
            // now look at the left
            r = mid - 1;
        }
        else
        {
            // if a[mid] < range then check on the right
            l = mid + 1;
        }
    }
    return ans;
}


// creating a the binary search function to ge the right range
int binaryRight(vector<int> &a, int range, int startIdx) // we have to set the l as the start index;
{
     int n = a.size();
    int ans = -1, l = startIdx, r= n - 1;
    while(l <= r)
    {
        // calculating the mid
        int mid = l + (r - l) / 2;
        if(a[mid] <= range)
        {
            ans = mid;  // mid can be the possible answer
            // now look at the right
            l = mid + 1;
        }
        else
        {
            // if a[mid] > range then check on the left
            r = mid - 1;
        }
    }
    return ans;
}
void solve()
{
   int n, l, r;     cin >> n >> l >> r;
   vector<int> a(n);    for(int i = 0; i < n; i++)  cin >> a[i];

   // here the approch we will sort the array and look for the range in if we found the range then add the range or continue

   sORT(a);

   ll ans = 0;
   for(int i = 0; i < n - 1; i++)
   {
        int leftRange = binaryLeft(a, l - a[i], i + 1);
        int rightRange = binaryRight(a, r - a[i], i + 1 );

        //if the leftRange pass the rightRange then continue
        if(leftRange > rightRange || leftRange == -1 || rightRange == -1)  continue;

        if(leftRange <= rightRange)
        {
            ans += rightRange - leftRange + 1;
        }
   }
   cout << ans << nl;
}
int main ()
{
    fastIO();

    testCase{

        solve();
    }
    return 0;
}