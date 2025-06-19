#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s; //TC : O(N)
    vector<int> freq(26,0); //TC: O(1)
    for (char c: s) //TC :O(N)
    {
        freq[c - 'a']++;
    }

    for(int i = 0; i < 26; i++) // TC : O(26)
    {
        
        if(freq[i] > 0)
        {
            cout << char(i + 'a' )<< " : " << freq[i] << endl;
        }
    }
    return 0;
}