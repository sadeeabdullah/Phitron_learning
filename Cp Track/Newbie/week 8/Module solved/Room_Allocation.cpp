// problem link : https://cses.fi/problemset/task/1164

// Bismillah hir rahmanir rahim
// keep Patience, Destiny is more beautiful

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define fastIO()                  \
     ios::sync_with_stdio(false); \
     cin.tie(NULL);
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define loop(start, end, var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define tStr(var) \
     string var;  \
     cin >> var;
#define testCase \
     int t;      \
     cin >> t;   \
     while (t--)

using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
     int n;    cin >> n;

     deque<pair<pair<int,int>, int>> guest;
     // having this set to store the rooms availble
     set<int> rooms;
     // having this set to store room number and their ending time
     set<pair<int,int>> endTimes;

     for(int i = 1; i <= n ;i ++)
     {
          int enter, exit;    cin >> enter >> exit;
          guest.push_back({{enter,exit}, i});
          //also storing the room availablity;
          rooms.insert(i);
     }

     sORT(guest);   // sorting the deque based on the enter time

     vector<int> roomSequence(n + 1);   // here we will store the room sequence they got;

     int cnt = 0;
     // now we will run the loop untill every guest get a room to stay
     while(!guest.empty()){

          // breaking a part again so that we can use it easily
          auto [time, idx] = guest.front();
          auto [enter, exit] = time;


          if(endTimes.size() && endTimes.begin()->first < enter)      // from the second time  or few rooms are taken
          {    
               // if any guest exit before the entering time then we can give the present guest this room
               int room = endTimes.begin()->second;    // giving the room
               roomSequence[idx] = room;
               endTimes.erase(endTimes.begin());
               rooms.erase(room);
               endTimes.insert({exit,room});
          
          }
          else
          {
               // first guest enter the hotel and get a room
               int room = *rooms.begin();    // he get the first room
               rooms.erase(room);       // erase the room from the available room
               roomSequence[idx] = room;     // storing the room number for the desire anser;
               endTimes.insert({exit, room});       // storing the room number and the exit time
          
          }
          guest.pop_front();
          cnt = max(cnt, (int)endTimes.size());
     }

     cout << cnt << nl;
     for(int i = 1; i <=n; i++)
     {
          cout << roomSequence[i] <<" ";
     }
     cout <<nl;

}
int main()
{
     fastIO();
     solve();
     return 0;
}