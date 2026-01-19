// Bismillah hir rahmanir rahim
// keep Patience, Destiny is more beautiful

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define fastIO()  ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define loop(start, end, var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define tStr(var) string var; cin >> var;
#define testCase  int t; cin >> t;while (t--)

using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// void solve()
// {
//     ll n;   cin >> n;       // n customer;
    
//     // using set to store the customers information
//     deque<pair<pair<ll, ll>,ll>> guest;

//     // storing the available rooms
//     set<ll> availableRooms;

//     for(ll i = 1; i <= n; i++){
//         ll a, d;    cin >> a >> d;
//         guest.push_back({{a, d}, i});
//         availableRooms.insert(i);
//     }

//     sORT(guest);
//     // we will store the endtimes of people leaving  and their room number and make it available again
//     set<pair<ll, ll>> endTimes;

//     // storing the room booking sequence
//     vector<ll> roomSequence(n + 1);

//     ll needAtMaxRoom = 0;
//     // now we will check everything untill all guests are served
//     while(!guest.empty()){

//         // now taking the value of guest to minimal and easy to access
//         auto[time, idx] = *(guest.begin());
//         auto[enter, exit] = time; 

//         if(!endTimes.empty() && endTimes.begin()->first < enter){   // when one or more guest are in the hotel
//             auto roomNumber = endTimes.begin()-> second;

//             //
//             availableRooms.insert(roomNumber);

//             //remove from the endtimes and avalilable room
//             endTimes.erase(endTimes.begin());


//         }else{
//             // it will run when for the first time or all rooms are available
//             auto roomNumber = *availableRooms.begin();
//             roomSequence[idx] = roomNumber; // storing the booked room;

//             // removing the booked room from the avaliable rooms;
//             availableRooms.erase(roomNumber);

//             // storing the guest deprature and room number
//             endTimes.insert({exit, roomNumber});

//             // removing the guest after giving him/her a room
//             // guest.erase(guest.begin());
//             guest.pop_front();
//         }

//         needAtMaxRoom = max(needAtMaxRoom, (ll)endTimes.size());
//     }
//     cout << needAtMaxRoom << nl;
//     for(ll i = 1; i <=n; i++)
//     cout << roomSequence[i] << " ";
//     cout << nl;
// }

void solve()
{
    ll n;   cin >> n;       // n customer;
    
    // using set to store the customers information
    deque<pair<pair<ll, ll>,ll>> guest;

    // storing the available rooms
    set<ll> availableRooms;

    for(ll i = 1; i <= n; i++){
        ll a, d;    cin >> a >> d;
        guest.push_back({{a, d}, i});
        availableRooms.insert(i);
    }

    sORT(guest);
    // we will store the endtimes of people leaving  and their room number and make it available again
    set<pair<ll, ll>> endTimes;

    // storing the room booking sequence
    vector<ll> roomSequence(n + 1);

    ll needAtMaxRoom = 0;
    // now we will check everything untill all guests are served
    while(!guest.empty()){

        // now taking the value of guest to minimal and easy to access
        auto[time, idx] = *(guest.begin());
        auto[enter, exit] = time; 
        if(!endTimes.empty() && endTimes.begin()->first < enter){

            roomSequence[idx] = endTimes.begin()->second;
            endTimes.erase(endTimes.begin());
            endTimes.insert({exit, roomSequence[idx]});

            // removing guest
            guest.pop_front();


        }else{
            // for the first time
            ll roomNumber = *availableRooms.begin();
            roomSequence[idx] = roomNumber;
            // removing the room from availablity
            availableRooms.erase(roomNumber);
            endTimes.insert({exit, roomNumber});

            // removing guest
            // guest.pop_front();
            guest.erase(guest.begin());
        }

        needAtMaxRoom = max(needAtMaxRoom, (ll)endTimes.size());
    }
    cout << needAtMaxRoom << nl;
    for(ll i= 1; i <= n; i++)
        cout << roomSequence[i] << " ";
    cout << nl;
}
int main()
{
    fastIO();

        solve();
    return 0;
}