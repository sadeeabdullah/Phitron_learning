#include <bits/stdc++.h>
using namespace std;
int main(){
    // char s[10] = "hello";
    // s = "gelo"; it will show error because we cannot reassign value after initialization in array
    // we could do that
    // strcpy(s,"hello")



    //so c++ introduced string class

    // string s = "hello";
    // s = "gello";
    // cout << s;



    // char s[10] = "hello";
    // char s2[10]= "hello";
    // if(strcmp(s,s2) == 0)
    // {
    //     cout << "same";
    // }

    //instead we can do:

    string s = "helo";
    string s2 = "hello";
    if(s == s2){
        cout << "same";
    }
    else
    {
        cout << "Not Same";
    }


    s2 = "hello hi how areayou";
    cout << s2;
    return 0;
}