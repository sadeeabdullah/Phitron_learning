#include <iostream>
using namespace std;
int main(){
    
    int x;
    // EOF means end of file:
    // likely it wil works or take input untill the user is providing or giving input
    // so you can use input as a condition into a while loop
    // sometime in the problem the test case will not be mentioned then you have to use the eof then
    while (cin >> x)
    {
        cout << x << endl;
    }
    
    return 0;
}