#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    // stringstream to get each word in the string
    stringstream ss(s);

    // retreiving word from stringstream ss
    string word;

    // creating map for counting the words count 
    map<string,int> mp;
    while (ss >> word)
    {
        mp[word] ++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " = " << it->second << endl;
    }
    return 0;
}