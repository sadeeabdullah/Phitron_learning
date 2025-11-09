// PROBLEM LINK : https://cses.fi/problemset/task/1141
// #include <bits/stdc++.h>
// #define ll long long int
// #define nl '\n'
// #define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
// #define yes cout << "YES"<< nl;
// #define no cout << "NO" << nl;
// #define loop(start, end,var) for (int var = (start); var <= (end); var++)
// #define rsORT(var) sort(var.rbegin(), var.rend())
// #define sORT(var) sort(var.begin(), var.end())
// #define testCase{} int tc; cin >> tc; while(tc--)
// using namespace std;

// int main ()
// {
//     fastIO();
 
//     int n;
//     cin >> n;
//     vector<int> songs(n);
//     loop(0, n - 1, i)
//     {
//         cin >> songs[i];
//     }

//     set<int> currentSongs;
//     int left =0, maxO = 0;

//     for(int right = 0;right < n; right++)
//     {
//         while(currentSongs.find(songs[right]) != currentSongs.end())
//         {
//             currentSongs.erase(songs[left]);
//             left++;
//         }
//         currentSongs.insert(songs[right]);
//         maxO = max(maxO, right - left + 1);
//     }
//     cout << maxO << nl;
//     return 0;
// }

// approach each time we will store the songs to set and before inserting the value to the set we will check if the value already available in the set if available we will erase untill the value is available
//and we will use two pointer for maintaining the highest unique playlist

//we will keep the left stable and right go but when we find a duplicate we will set the left increase while deleting the previous value of the duplicate value and the duplicate value itself



/// lets do it with another approach

// #include <bits/stdc++.h>
// #define ll long long int
// #define nl '\n'
// #define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
// #define yes cout << "YES"<< nl;
// #define no cout << "NO" << nl;
// #define loop(start, end,var) for (int var = (start); var <= (end); var++)
// #define rsORT(var) sort(var.rbegin(), var.rend())
// #define sORT(var) sort(var.begin(), var.end())
// #define testCase{} int tc; cin >> tc; while(tc--)
// using namespace std;

// int main ()
// {
//     fastIO();
 
//     int n;
//     cin >> n;

//     int maxO = 0;
//     // we will store the array with the index in a map
//     map<int, int> lastSeen;
//     int left = 1;
//     loop(1,n, i)
//     {
//         int x;
//         cin >> x;

//         if(lastSeen.find(x) != lastSeen.end() && lastSeen[x] >= left)
//         {
//             left = lastSeen[x] + 1;
//         }
//         lastSeen[x]  = i;
//         maxO = max(maxO, i - left + 1);
//     }

//     cout << maxO << nl;
//     return 0;
// }

// lets make it more small and simple
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
 
    int n;
    cin >> n;

    int maxO = 0;
    // we will store the array with the index in a map
    map<int, int> lastSeen;
    for(int i = 0, j = 0; i < n; i++)
    {
        int x;
        cin >> x;

        j = max(j, lastSeen[x] + 1);
        lastSeen[x]  = i;
        maxO = max(maxO, i - j + 1);
    }

    cout << maxO << nl;
    return 0;
}
