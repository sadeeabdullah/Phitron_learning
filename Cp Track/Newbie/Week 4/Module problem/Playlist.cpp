// PROBLEM LINK : https://cses.fi/problemset/task/1141
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
    vector<int> songs(n);
    loop(0, n - 1, i)
    {
        cin >> songs[i];
    }

    set<int> currentSongs;
    int left =0, maxO = 0;

    for(int right = 0;right < n; right++)
    {
        while(currentSongs.find(songs[right]) != currentSongs.end())
        {
            currentSongs.erase(songs[left]);
            left++;
        }
        currentSongs.insert(songs[right]);
        maxO = max(maxO, right - left + 1);
    }
    cout << maxO << nl;
    return 0;
}

// approach each time we will store the songs to set and before inserting the value to the set we will check if the value already available in the set if available we will erase untill the value is available
//and we will use two pointer for maintaining the highest unique playlist

//we will keep the left stable and right go but when we find a duplicate we will set the left increase while deleting the previous value of the duplicate value and the duplicate value itself

