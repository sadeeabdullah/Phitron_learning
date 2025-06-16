#include <bits/stdc++.h>
using namespace std;
int main(){
    // string s = "hello";

    //using string constructor
    //method 1
    string s("hello");

    // method 2
    string s2("hello everyone", 4); // this will take the string an cut it into 4 size or resize it  to 4


    //method 3
    string s3 = "hello world";
    string t(s3, 4); // this string constructor will take the string and take the element after 4 to end

    //method 4
    string s4(5,'a'); // it will print 5 "a" and it is a string constructor

    cout << s << endl;
    cout << s2 << endl;
    cout << t << endl;
    cout << s4 << endl;
    return 0;
}