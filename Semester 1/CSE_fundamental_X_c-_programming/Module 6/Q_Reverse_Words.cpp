#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s); // created stringstream to get these word
    string word;
    // string word1;
    // ss  >> word1;
    // cout << word1 << endl;

    //using while loop to print it untill the last word

    ss >> word;
    cout << word ;

    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        //cout << word << " " ; // we are getting a space after the last word we have delete it.]
        cout << " " << word;
    }
    
    return 0;
}