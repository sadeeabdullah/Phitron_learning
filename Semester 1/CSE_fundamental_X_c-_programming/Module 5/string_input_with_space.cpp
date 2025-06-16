#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    string s; // dynamic array
    // cin >> s;

    // cin.getline(s, 100); we used to do that when it was static array( char s[100];) but now string is an dynamic array and the size is not constant
    cin.ignore(); // to ignore the enter of previous enter 
    getline(cin, s); // it will take space BUT THE PROBLEM IS IT TAKES THE ENTER TO IGNORE THAT WE HAVE TO USE CIN.IGNORE

    cout << x << endl;

    cout << s << endl;
    return 0;
}