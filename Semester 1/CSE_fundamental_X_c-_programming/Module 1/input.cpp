// #include<iostream>
// int main(){
//     int x;
//     std:: cin>>x; //if we feel bore to write the std again and again write it before the main function like: using namespace std;
//     std:: cout << x << std :: endl; // here endl means to go to a new line
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int x;
    char c;
    double d;
    cin >> x >> c >> d;
    cout << x << " " << c << endl << d << endl;

    // how to get a ascii value of any character
    // here is how you can do that;
    // first take it into a int variable then print the variable
    int ascii = c;
    cout << ascii << endl;

    // or there is another way to get the ascii value of any character ascii value it is called type castingm
    // while printing the character you have to add the type you want to cast it into a () bracket
    char ch = 'L';
    cout << (int)ch << endl;

    // in the same way we also can change type to char
    cout << (char)x << endl;
    return 0;
}