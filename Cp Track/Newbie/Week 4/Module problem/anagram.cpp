// problem link : https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?_gl=1*2hl6h9*_ga*MTYxMTcwOTY2OC4xNjYwMzk1MzY0*_ga_DWCCJLKX3X*MTY5Njc3NDQzNi4xLjEuMTY5Njc3NDUwNy4wLjAuMA..


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
using namespace std;

int main ()
{
    fastIO();
    string txt, pat;
    cin >> txt;
    cin >> pat;


    int windowSize = pat.size();
    int n = txt.size();

    if (n < windowSize)
    {
        cout << 0 << nl;
        return 0;
    }

    int l = 0, r = 0;

    map<char, int> tmpMp, patMp;

    for (auto ch : pat)
    {
        patMp[ch]++;
    }
    int cnt = 0;
    while (r < n)
    {
        tmpMp[txt[r]]++;
        if (r - l + 1 == windowSize)
        {
            if(tmpMp == patMp)
                cnt++;
            
            tmpMp[txt[l]]--;
            if (tmpMp[txt[l]] == 0)
                tmpMp.erase(txt[l]);
            l++;
        }
        r++;
    }

    cout << cnt << nl;
    return 0;
}


// // User function template for C++
// class Solution {
//   public:
//     int search(string &pat, string &txt) {
//         // code here
        
//     int windowSize = pat.size();
//     int n = txt.size();

//     int cnt = 0;
//     if (n < windowSize)
//     {
//         return cnt;
//     }

//     int l = 0, r = 0;

//     map<char, int> tmpMp, patMp;

//     for (auto ch : pat)
//     {
//         patMp[ch]++;
//     }
//     while (r < n)
//     {
//         tmpMp[txt[r]]++;
//         if (r - l + 1 == windowSize)
//         {
//             if(tmpMp == patMp)
//                 cnt++;
            
//             tmpMp[txt[l]]--;
//             if (tmpMp[txt[l]] == 0)
//                 tmpMp.erase(txt[l]);
//             l++;
//         }
//         r++;
//     }
    
//     return cnt;
//     }
// };