#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    
    while (test_cases--) {
        string s, u;
        cin >> s >> u;

        int short_string_size = min(s.size(), u.size());
        string big_string = (s.size() > u.size()) ? s : u;

        for (int i = 0; i < short_string_size; i++) {
            cout << s[i] << u[i];
        }

        for (int i = short_string_size; i < big_string.size(); i++) {
            cout << big_string[i];
        }

        cout << endl;
    }

    return 0;
}
