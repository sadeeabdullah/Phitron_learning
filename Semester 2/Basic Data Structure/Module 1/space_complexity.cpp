#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; //O(1)
    cin >> n >> m; //O(1)
    int a[n]; // O(N)
    int b[n][m]; // O(N * M)
    for (int i = 0; i <n; i++) // O(1) --> here we are taking or using any new space for the iteration, we are using i repeatedly.
    {
        cin >> a[i];
    }
    
    return 0;
}

// so the total space complexity will be (worst case) --> O(N * M)