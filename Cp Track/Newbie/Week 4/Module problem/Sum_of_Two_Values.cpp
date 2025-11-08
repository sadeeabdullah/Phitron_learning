// problem link : https://cses.fi/problemset/task/1640

// #include <bits/stdc++.h>
// #define ll long long int
// #define nl '\n'
// #define fastIO()                 \
//     ios::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define yes cout << "YES" << nl;
// #define no cout << "NO" << nl;
// #define loop(start, end, var) for (int var = (start); var <= (end); var++)
// #define rsORT(var) sort(var.rbegin(), var.rend())
// #define sORT(var) sort(var.begin(), var.end())
// #define testCase \
//     {            \
//     }            \
//     int tc;      \
//     cin >> tc;   \
//     while (tc--)
// #define N 2 * 100000;
// using namespace std;

// vector<pair<int, int>> arr;
// // binary search
// int binarySearch(int l, int r, int val)
// {
//     while (l <= r)
//     {
//         int mid = (l + r) / 2;  // CORRECTED: This is the standard way

//         if (arr[mid].first == val)
//             return mid;
//         else if (arr[mid].first < val)
//         {
//             l  = mid + 1;
//         }
//         else{
//             r = mid - 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     fastIO();

//     int n, x;
//     cin >> n >> x;
//     loop(0, n - 1, i)
//     {
//         int x;
//         cin >> x;
//         arr.push_back({x, i + 1});
//     }

//     sORT(arr);

//     loop(0, n - 1, i)
//     {
//         int searchingValue = x - arr[i].first;
//         if (searchingValue <= 0)
//             continue;
//         int it = binarySearch(i + 1, n - 1, searchingValue);

//         if (it != -1)
//         {
//             cout << arr[i].second << " " << arr[it].second << nl;
//             return 0;
//         }
//     }

//     cout << "IMPOSSIBLE" << nl;

//     return 0;
// }


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define testCase{} int tc; cin >> tc; while(tc--)
using namespace std;

int main ()
{
    fastIO();
 
    int n, x;
    cin >> n>> x;
    vector<pair<int,int>> arr;

    loop (0, n -1, i)
    {
        int x;
        cin >> x;
        arr.push_back({x, i + 1});
    }

    sORT(arr);
    for(int i = 0, j = n - 1; i < j;)
    {
        if (arr[i].first + arr[j].first == x)
        {
            cout << arr[i].second << " " << arr[j].second << nl;
            return 0;
        }
        else if (arr[i].first + arr[j].first > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    cout << "IMPOSSIBLE" << nl;

    return 0;
}