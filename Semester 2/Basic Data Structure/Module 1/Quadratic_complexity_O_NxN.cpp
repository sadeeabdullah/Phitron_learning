#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) // this loop run n times
    {
        for(int j = 0; j < m; j++) //this loop run m times each loop of the parent loop so the to total opeartion will be n*m
        // that is why it is O(N*N) time complexity
        {
            cout << "hello" << endl;
        }
    }

    // the more nested looop you make the more operation happened
    
    return 0;
}