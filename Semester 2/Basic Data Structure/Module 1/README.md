# Time Complexity and Counting It

## Understanding Time Complexity
Time complexity does **not** measure the actual time taken to run code (which varies across systems like Linux, M1 Pro, or Windows). Instead, it counts the **number of operations** performed during execution.

## Asymptotic Notations
We use these notations to classify time complexity:
1. **Ω (Omega) Notation** → Best case scenario  
2. **Θ (Theta) Notation** → Average case scenario  
3. **O (Big-O) Notation** → Worst case scenario (most commonly used)  

## Rules for Counting Time Complexity
1. **Always consider the worst-case** (Big-O notation).  
2. **Ignore constants** (e.g., `O(2n + 3)` becomes `O(n)`).  

## Code Example with Analysis
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;                  // O(1)
    cin >> n;               // O(1)

    for (int i = 1; i <= n; i++) {   // O(n)
        cout << i;
    }

    cout << endl;           // O(1)

    for (int i = 1; i <= n; i++) {   // O(n)
        cout << i;
    }
    
    return 0;               // O(1)
}

TOTAL OPERATIONS = O(1) + O(1) + O(n) + O(1) + O(n) + O(1)
                = O(2n + 3)
                = O(n)  [After ignoring constants]