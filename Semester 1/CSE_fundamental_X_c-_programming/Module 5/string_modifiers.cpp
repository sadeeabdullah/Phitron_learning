#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello";
    string s2 = " hi";
    //s +=  s2; // string concation
    //s.append(s2); //  this will also do concatation

    //push back means add in back or last
    // s.push_back('A');
    //s.pop_back(); this remove the last element of the string

    //s += 'A';

    //or we can update any index element
    //s[0] = 'G'; //but you can't expand the array size like that so you should not try to update the index more than the size


    // we can reassign value of string
    s = "fello";

    string s3 = "jello";

    //or we can assign another string into one like integer and other datatype
    s =s3;
    //or we can use assign funciton for it
    //s.assign(s3); // or s.assign("lello";)

    string s4 = "hello tumi";
    //s4.erase(3);//we can erase for only that we can use resize function

    //especial
    //s4.erase(3,5);starting index, last index to delete.


    //s4.replace(5,5,"bangladesh"); // you have to tell from where you have to replace , how many character you need to delete, what you want to replace with.

    // or you if you dont want to delete any character then use 0
    //s4.replace(11,0,"ar ki boli");


    s4.insert(5, " oh hell no"); // from where to insert, what to insert

    cout << s4 << endl;

    return 0;
}