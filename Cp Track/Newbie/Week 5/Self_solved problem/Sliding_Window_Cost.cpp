    // //problel ink :https://cses.fi/problemset/task/1077


    //BRUTE FORCE APPROACH;

    // #include <bits/stdc++.h>

    // #include<ext/pb_ds/assoc_container.hpp>
    // #include<ext/pb_ds/tree_policy.hpp>

    // #define ll long long int
    // #define llmax LLONG_MAX
    // #define nl '\n'
    // #define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
    // #define yes cout << "YES"<< nl;
    // #define no cout << "NO" << nl;
    // #define loop(start, end,var) for (int var = (start); var <= (end); var++)
    // #define rsORT(var) sort(var.rbegin(), var.rend())
    // #define sORT(var) sort(var.begin(), var.end())
    // #define testCase{} int tc; cin >> tc; while(tc--)
    // #define tInt(var) int var; cin >> var;
    // #define tLL(var)  ll var;  cin >> var;
    // #define tStr(var) string var; cin >> var;

    // using namespace __gnu_pbds;

    // using namespace std;

    // template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

    // int main ()
    // {
    //     fastIO();

    //     tInt(n); tInt(k);
    //     vector<int> a(n);
    //     vector<int> ans(n - k + 1);

    //     loop(0, n - 1, i)
    //     {
    //         cin >> a[i];
    //     }

    //     // we are taking a pbds for storing these vlaues
    //     pbds<pair<int,int>> pb;

    //     int l= 0, r = 0;
    //     while(r < n)
    //     {
    //         pb.insert({a[r], r});
    //         if (r - l + 1 == k)
    //         {
    //             auto it = (pb.find_by_order(k / 2));
    //             int ans = 0;
    //             for(auto [val, idx] : pb)
    //             {
    //                 ans += abs(val - it->first);
    //             }

    //             cout << ans << " ";
    //             if(!pb.empty())
    //             {
    //                 pb.erase({a[l],l});
    //             }
    //             l++;
    //         }
    //         r++;
    //     }

    //     return 0;
    // }

  


    //OPTIMIZE:


// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #define ll long long
// using namespace std;
// using namespace __gnu_pbds;
 
// typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
//              tree_order_statistics_node_update>
//     pbds; // find_by_order, order_of_key
 
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> arr(n);
//     pbds s;
 
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
 
//     for (int i = 0; i < k; i++)
//         s.insert(arr[i]);
 
//     ll old_middle = *s.find_by_order((k - 1) / 2);
//     ll d = 0;
 
//     for (int i = 0; i < k; i++)
//         d += abs(arr[i] - old_middle);
 
//     cout << d << " ";
 
//     for (int i = 0; i < n - k; i++)
//     {
//         s.erase(s.find_by_order(s.order_of_key(arr[i])));
//         s.insert(arr[i + k]);
//         ll new_middle = *s.find_by_order((k - 1) / 2);
//         d += abs(new_middle - arr[i + k]) - abs(old_middle - arr[i]);
//         if (k % 2 == 0)
//             d -= (new_middle - old_middle);
//         old_middle = new_middle;
//         cout << d << " ";
//     }
 
//     return 0;
// }


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
#define testCase{} int tc; cin >> tc; while(tc--)
#define tInt(var) int var; cin >> var;
#define tLL(var)  ll var;  cin >> var;
#define tStr(var) string var; cin >> var;

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree <T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main ()
{
    fastIO();
    tInt(n);
    tInt(k);

    vector<int> a(n);
    loop(0, n - 1, i)
    {
        cin >> a[i];
    }

    pbds<int> pb;

    // for the first sub array 
    for(int i = 0; i < k ;i++)
    {   
        pb.insert(a[i]);
    }
    
    ll  old_median = *pb.find_by_order((k - 1) / 2);
    ll d = 0;

    for(int i = 0; i < k; i++)
    {
        d += abs(old_median - *pb.find_by_order(i));
    }

    cout << d << " ";

    for(int i = 0; i < n - k; i++)
    {
        pb.erase(pb.find_by_order(pb.order_of_key(a[i])));
        pb.insert(a[i + k]);

        ll new_median = *pb.find_by_order((k - 1) / 2);

        d += abs(new_median - a[i + k]) - abs(old_median - a[i]);
        if(k % 2 == 0)
        {
            d -=(new_median - old_median);
        }
        old_median = new_median;
        cout << d << " " ; 
    }
    return 0;
}