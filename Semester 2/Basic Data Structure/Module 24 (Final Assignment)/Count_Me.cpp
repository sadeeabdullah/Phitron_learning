#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    cin.ignore(); // for ignoring the enter character after test case
    while (tc--)
    {
        string s;
        getline(cin, s);


        //taking a map for counting the word repitation
        map<string, int> mp;
        // we will use string stream to get the each word
        stringstream ss(s);
        string word;

        // count here
        int count = INT_MIN;
        string maxFindWord;
        while (ss >> word) // we need to count the max word here because after insertion completing we will not able to get the max sequentially given in the string, map sort them.
        {
            mp[word]++;
            if (mp[word] > count)
            {
                count =  mp[word];
                maxFindWord = word;
            }
        }

        cout << maxFindWord << " " << count << endl;
    }
    return 0;
}