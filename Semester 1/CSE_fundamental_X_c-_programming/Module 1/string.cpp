// #include <iostream>
// to add all the header file
#include<bits/stdc++.h>

using namespace std;
int main(){
    char s[100];
    //cin >> s; // like c programming it also dont take value from space
    // we have used fgets(s,100,stdin) in programming c to solve the issue we have to use things below in c++:
    cin.getline(s,100);
    cout << s << endl;

    //but there is a issue with getline like fgets if we take int and after that enter a enter in input then it will take enter as a character and end the input for string :
    // in c we have added  a space before the input specifier in scanf(" %c", s) and that is how the issue was solved.
    // N.B: to solve the issue in c++ the approach is shown below:
    // so good practice is before using getline dont forget to add cin.ignore();
    int x;
    char s2[100];
    cin >> x;
    cin.ignore();
    cin.getline(s2, 100);
    cout << x << endl << s2 << endl;
    

    // also we can use string as a class( what is class will explained in next few session)
    string s3;
    cin >> s3;
    cout << s3 << endl;
    return 0;
}