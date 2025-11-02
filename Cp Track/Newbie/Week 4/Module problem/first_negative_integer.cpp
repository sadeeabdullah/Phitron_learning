// problem link : https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

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
    cin >> n;
    vector<int> arr(n);
    loop(0, n - 1, i)
    {
        cin >> arr[i];
    }

    vector<int> ans;

    int k;
    cin >> k;

    int i = 0, j = 0;
    queue<int> q;
    while(j < n)
    {

        if (arr[j] < 0)
        {
            q.push(arr[j]);
        }

        if (j - i + 1 == k)
        {
            if (!q.empty())
            {
                ans.push_back(q.front());
                if (arr[i] == q.front())
                    q.pop();
            }
            else
                ans.push_back(0);
            
            i++;
        }
        j++;
    }


    for (int val : ans)
        cout << val << " ";
    return 0;
}


// class Solution {
//   public:
//     vector<int> firstNegInt(vector<int>& arr, int k) {
//         // write code here
//         int n = arr.size();
//         vector<int> ans;
//         int i = 0, j = 0;
//     queue<int> q;
//     while(j < n)
//     {

//         if (arr[j] < 0)
//         {
//             q.push(arr[j]);
//         }

//         if (j - i + 1 == k)
//         {
//             if (!q.empty())
//             {
//                 ans.push_back(q.front());
//                 if (arr[i] == q.front())
//                     q.pop();
//             }
//             else
//                 ans.push_back(0);
            
//             i++;
//         }
//         j++;
//     }
//     return ans;
//     }
// };