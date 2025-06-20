#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n); //TC: O(N)
    for (int i = 0; i < n; i++)//TC: O(N)
    {
        cin >> a[i];
    }
    
    //BUILDING PREFIX FOR SUMMATION
    vector<long long int> prefix(n + 1, 0); // built prefix and intitialized with 0
    for (int i = 0; i < n; i++)
    {
        prefix[i + 1] = prefix[i] + a[i]; // it will get the summation untill the end N.B: most importantly the time complexity is o(N)
    }
    
    // for taking the input of pairs
    while(q--)//TC: O(Q)
    {
        int l, r;
        cin >> l >> r;

        //NAIVE APPROACH

        // int summation = 0;
        // for (int i = l - 1; i < r; i++)//TC: O(N)
        // {
        //     summation += a[i];
        // }
        // cout << summation << endl;
        
        cout << prefix[r] - prefix[l - 1] << endl;
    }
    return 0;
}