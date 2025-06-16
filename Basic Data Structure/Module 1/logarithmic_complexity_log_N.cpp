#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n;

    for (int i = 1; i <= n; i *= 3) //TIME COMPLEXITY: O(log n) . if we see that the increment or the decrement is * or / then it is logarithmic complexity else that is linear or O(n) complexity. OPERATION COUNT IS LOG base 3 N.
    {
        cout << i << endl;
    }

    for (int i = 1; i <= n; i /= 2)//TIME COMPLEXITY: O(log n). OPERATION COUNT IS LOG base 2 N.
    {
        cout << i << endl;
    }

    int k = 2;

    for (int i = 1; i <= n; i++) //TIME COMPLEXITY: O(log n) because the increment is happening into it. OPERATION COUNT IS LOG base 2 OR (K) N.
    {
        cout << i << endl;
        i = i * k; 
    }
    
    return 0;
}