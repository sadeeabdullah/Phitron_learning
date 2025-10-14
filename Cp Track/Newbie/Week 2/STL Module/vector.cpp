#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();

    // vector is a container it has algorithms/ function and iterators like any other vector

    // i have mentioned the Time Complexity of the functions which are not mentioned is O(1);


    //// WITH SIZE
    // int n;
    // cin >> n;
    // vector<int> v(n);   
    // for(int i = 0;i < n;i++)    
    //     cin >> v[i];
    // for(int val : v)
    //     cout << val << " ";


    // // WITHOUT SIZE
    // int n;
    // cin >> n ;
    // vector<int> v;   
    // for(int i = 0;i < n;i++)    
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // //removing element from last
    // v.pop_back();
    // for(int val : v)
    //     cout << val << " ";
    // cout << nl;
    // cout << v.front() << nl;
    // cout << v.back() << nl;
    // cout << v.empty() << nl; // empty or not;
    // v.clear();                                      // O(N);
    // cout << v.empty() << nl;

    //vector<int> va(10); // initially if i don't assign any value it would be 0

    // OR we can assign value using assign function
    // vector<int> va(10);
    // va.assign(10, 5);               // O(N);
    // // vector<int> va(10, 4); // or we can assign value in one go                  // O(N); 
    // for(int val : va)
    //     cout << val << " ";



    // we can use resize function to resize the vector also we can assign value while resizing vector

    // vector<int> v;
    // v.resize(5, 0);
    // for(int val : v)
    //     cout << val << " ";
    // cout << nl;

    int n;
    cin >> n ;
    vector<int> v;   
    for(int i = 0;i < n;i++)    
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    auto it = v.begin() + 1; // it works likely to index
    cout << *it << nl;

    for(auto it = v.begin(); it != v.end() ;it++)
    {
        cout << *it << " ";
    }
    cout << nl;

    for (auto it = v.rbegin(); it != v.rend(); it++ )
    {
        cout << *it << " ";
    }
    cout << nl;

    // auto lastElement = v.end() - 1;
    auto lastElement = --v.end();
    // lastElement--;
    cout << *lastElement << nl;

    // reverse(v.begin(), v.end());         // O(N)
    // sort(v.begin(), v.end());               // O(nlogn)
    sort(v.rbegin(), v.rend());               // O(nlogn)
    sort(v.begin(), v.end(), greater<int>());               // O(nlogn)

    for (auto val : v)
    {
        cout << val << " ";
    }
    cout <<nl;


    // min element will return the min value iterator
    // max element will return the max value iterator

    auto mn = min_element(v.begin(), v.end());              // O(N)
    auto mx = max_element(v.begin(), v.end());              // O(N)

    cout << *mn << " " << *mx << nl;

    int mx_element_position = mx - v.begin();
    cout << mx_element_position << nl;
    return 0;
}