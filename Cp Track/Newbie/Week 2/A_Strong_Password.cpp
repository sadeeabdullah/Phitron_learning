// problem link : https://codeforces.com/problemset/problem/1997/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        string res = s;
        bool added = false;

        // Try to break repeated letters
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i-1]) {
                char c = (s[i] == 'a') ? 'b' : 'a';
                res.insert(res.begin() + i, c);
                added = true;
                break;
            }
        }

        // If no repeated letters, insert at beginning
        if (!added) {
            char c = (s[0] == 'a') ? 'w' : 'a';
            res = c + s;
        }

        cout << res << '\n';
    }
    return 0;
}
