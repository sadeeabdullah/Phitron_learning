#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    cout << s[0] << endl; // we can access the index like character array

    cout << s.at(0) << endl; // we don't ususally use that

    cout << s.back() << endl; // it will print access the last element
    cout << s.front() << endl; // it will print access the first element

    //or we can use 
    cout << s[s.size() - 1] << endl;

    //use as your preferrence or you like
    return 0;
}