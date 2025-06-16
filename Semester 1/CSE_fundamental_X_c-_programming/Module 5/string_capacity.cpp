#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "hello";
    cout << s.size() << endl;
    cout << s.max_size() << endl; // print the max size according to compiler around 10^6
    cout << s.capacity() << endl; // print the capacity

    s.clear(); /// clear the string
    cout << s << endl;
    cout << s.size() << endl;

    if(s.empty() == true) // or we can check the size is 0 or not
    {
        cout << "empty" << endl;
    }
    else{
        cout << "NOt empty" << endl;
    }

    string s3 = "hello world";
    // s3.resize(4); : hell
    //s3.resize(17); // it will print hello world nulnulnull or garbage value

    // or we can fill the extra location with any other character
    s3.resize(17,'s');
    cout << s3 << endl;
    return 0;
}