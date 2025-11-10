#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int
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
 
    // tInt(n);                    ///6
    // pbds<int> pb;
    // loop(0, n - 1, i)
    // {
    //     tInt(x);            
    //                             //4 2 9 4 1 3
    //     pb.insert(x);
    // }

    // for(auto val : pb)
    // {
    //     cout << val << " ";         //1 2 3 4 4 9 
    // }
 
    // tInt(n);                    ///6
    // pbds<int> pb;           // using as set
    // loop(0, n - 1, i)
    // {
    //     tInt(x);            
    //                             //4 2 9 4 1 3
    //     pb.insert(x);
    // }

    // pb.erase(4);
    // for(auto val : pb)
    // {
    //     cout << val << " ";         //1 2 3 9 
    // }


    // tInt(n);                    ///6
    // pbds<int> pb;           // using as multiset
    // loop(0, n - 1, i)
    // {
    //     tInt(x);            
    //                             //4 2 9 4 1 3
    //     pb.insert(x);
    // }

    // pb.erase(4);
    // for(auto val : pb)
    // {
    //     cout << val << " ";         //1 2 3 4 4 9 
    // }


    // tInt(n);                    ///6
    // pbds<pair<int,int>> pb;           // using as set
    // loop(0, n - 1, i)
    // {
    //     tInt(x);            
    //                             ///1 2 3 4 4 9 
    //     pb.insert({x, i});
    // }

    // pb.erase({3, 5});
    // for(auto [val, valu] : pb)
    // {
    //     cout << val << " ";         //1 2 4 4 9 
    // }


    // tInt(n);                    ///6
    // pbds<int> pb;           // using as set
    // loop(0, n - 1, i)
    // {
    //     tInt(x);            
    //                             ///1 2 3 4 4 9 
    //     pb.insert(x);
    // }

    // int x = pb.order_of_key(9);             // 4
    // cout << x << nl << nl << nl;
    // for(auto val : pb)
    // {
    //     cout << val << " ";         //1 2 3 4 9 
    // }



    //ORDER OF KEY
    // tInt(n);                    ///6
    // pbds<int> pb;           // using as multiset
    // loop(0, n - 1, i)
    // {
    //     tInt(x);            
    //                             ///1 2 3 4 4 9 
    //     pb.insert(x);
    // }

    // int x = pb.order_of_key(9);             // 5
    // cout << x << nl << nl << nl;
    // for(auto val : pb)
    // {
    //     cout << val << " ";         //1 2 3 4 9 
    // }



    // FIND BY ORDER
    tInt(n);                    ///6
    pbds<int> pb;           // using as multiset
    loop(0, n - 1, i)
    {
        tInt(x);            
                                ///1 2 3 4 4 9 
        pb.insert(x);
    }

    auto y = pb.find_by_order(5);             // 9
    cout << *y << nl << nl << nl;
    for(auto val : pb)
    {
        cout << val << " ";         //1 2 3 4 9 
    }
    return 0;
}