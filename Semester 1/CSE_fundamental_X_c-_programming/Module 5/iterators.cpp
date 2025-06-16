#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "hello";

    // for (int i = 0; i < s.size(); i++) // here "i" is the iterator. it increase or decrease to go to start to end or end to start.
    // {
    //     cout << s[i] << endl;
    // }

    // string has two iterator begin() --> its point to the start index  and end() --> its point the index after the last index

    // as it is a pointer each so we have to derefference to enter or acces the value
    cout << *s.begin() << endl;
    cout << *s.end() << endl; // it points the index after the last index so it is null. as string always has a null value so it will be null

    // how to get the last index then?
    cout << *(s.end() - 1) << endl;
    cout << endl;
    

    //now lets run how to get all the value without int i iteration

    // for (string :: iterator it = s.begin(); it < s.end(); it++) // without writing string :: iterator we can use auto it is ok for the compiler after 11(not inclusive)

    //traverse using iterator
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    
    return 0;
}