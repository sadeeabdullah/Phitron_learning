#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // OPERATION : O(1)
    cin >> n; // OPERATION : O(1)

    for (int i = 1; i <= n; i++) // OPERATION : O(n)
    {
        cout << i;
    }

    cout << endl; // OPERATION : O(1)

    for (int i = 1; i <= n; i++) // OPERATION : O(n)
    {
        cout << i;
    }
    
    return 0; // OPERATION : O(1)


    //TOTAL OPERATION OR TIME COMPLEXITY = O(n + n + 1 + 1 + 1)
                                    //  = O(2n + 3)
                                      // = O(n)
}