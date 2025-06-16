#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string rev_s = s;
     reverse(rev_s.begin(), rev_s.end());
    (s == rev_s) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}