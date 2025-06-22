#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<long long int> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if(i == 1)
        prefix[i] = v[i];
        else
        prefix[i] = prefix[i- 1] + v[i];

        
    }

    while (q--) // TC: O(Q)
    // with the inner loop the whole loop TC: will be O(N * Q) and it will cause the time limit exceed error
    {
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        // for (int i = l; i <= r; i++) // TC: O(N) l,r worst can be 1 to n
        // {
        //     sum += v[i];
        // }

        // to avoid the time limit exceed error we have to decrease the inner loop 
        // to make it O(1) ; we made a prefix summation array outside of the loop
        (l == 0) ? sum = prefix[r]
                 : sum = prefix[r] - prefix[l - 1]; 
        
        cout << sum << endl;
    }
    
    
    return 0;
}