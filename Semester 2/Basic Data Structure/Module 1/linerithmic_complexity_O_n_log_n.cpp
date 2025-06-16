#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) // this loop run n times so TIME COMPLEXITY = O(N)
    {
        for(int j = 1; j <= m; j *= 2) // TIME COMPLEXITY = O(LOG(N))
        {
            cout << "hello" << endl;
        }
    }

    //TIME COMPLEXITY OF THE CODE = O(N LOG(N))

    // the more nested looop you make the more operation happened
    
    return 0;
}