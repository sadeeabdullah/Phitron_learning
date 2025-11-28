// problem link ; https://www.codechef.com/problems/PALIXOR

// Bismillah hir rahmanir rahim
// keep Patience, Destiny is more beautiful

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define loop(start, end, var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define tStr(var) \
    string var;   \
    cin >> var;
#define testCase \
    int t;       \
    cin >> t;    \
    while (t--)

using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// key observation:
// 1. for xor operation a ^b = c, a ^ c = b, b ^ c = a;
// 2. we are storing the palindrome to the limit ( we can do it with brute force to check every pair palindrome or not then the complexity would be O(n^2) and this will not satisfy the given constrain);
// 3. using the 1 observation we are going to count the pair that satisfy the given condition

/// checking palindrome
bool isPalindrome(int n)
{
    string s = to_string(n);

    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            return false;
        }
    }
    return true;
}
const int maxN = (1LL << 15);

vector<int> allPalindrome;

void markPalindrome()
{
    for (int i = 0; i <= maxN; i++)
    {
        if (isPalindrome(i))
        {
            allPalindrome.push_back(i);
        }
    }
}


void solve()
{

    int n; 
    cin >> n;

    vector<int> a(n), cnt(maxN + 1);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    ll ans = n; // firstly all the element is palindrome when we do xor with itself

    // now we will traverse through all the value of it and check if it exist on the allpalindrome vector or not

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < allPalindrome.size(); j++)
        {
            int curr = (a[i] ^ allPalindrome[j]);
            ans += cnt[curr];
        }
    }

    cout << ans / 2 << nl;  
}
int main()
{
    fastIO();
    markPalindrome();

    testCase
    {
        solve();
    }
    return 0;
}