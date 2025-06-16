#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int first_3_dgt = 0;
        int last_3_dgt = 0;

        for (int i = 0, j = 5; i < 3 && j > 2; i++ , j--)
        {
            first_3_dgt += (int)s[i];
            last_3_dgt += (int)s[j];
        }


        (first_3_dgt == last_3_dgt) ?
        cout << "YES" << endl
        :
        cout << "NO" << endl;
        
    }
    return 0;
}