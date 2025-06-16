#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    // for (int i = 0; i < s.size(); i++) // work with index and element
    // {
    //     cout << s[i];
    // }

    for (char c : s) // only works with element not with  index
    {
        cout << c << endl;
    }
    
    
    return 0;
}