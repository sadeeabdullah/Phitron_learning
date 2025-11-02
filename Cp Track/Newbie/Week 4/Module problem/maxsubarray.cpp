// problem l ink : https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
using namespace std;

int main ()
{
    fastIO();
    int n;
    cin >>n;
    vector<int> arr(n);
    loop(0, n -1 , i)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k; 

    int ans = INT_MIN;
    int i = 0, r = 0;
    int sum = 0;
    while(r < n)
    {
        sum += arr[r];
        if (r - i + 1 == k)
        {
            ans = max(sum, ans);
            sum -= arr[i];
            i++, r++;;
        }
        else
        {
            r++;
        }

    }

    cout << ans << nl;
    return 0;
}


// class Solution {
//   public:
//     int maxSubarraySum(vector<int>& arr, int k) {
//         // code here
//        int n = arr.size();

//     int ans = INT_MIN;
//     int i = 0, r = 0;
//     int sum = 0;
//     while(r < n)
//     {
//         sum += arr[r];
//         if (r - i + 1 == k)
//         {
//             ans = max(sum, ans);
//             sum -= arr[i];
//             i++, r++;;
//         }
//         else
//         {
//             r++;
//         }

//     }
//     return ans;
//     }
// };