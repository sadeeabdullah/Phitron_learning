#include <iostream>
using namespace std;
int main(){
    int x = 7;
    if (x % 2 == 0)
    {
        cout << "Even" << endl; // here you can also use \n into the "" double quation to get new line after printing the string
        // cout << "Even\n";
    }else{
        cout << "Odd" << endl;
    }
    
    return 0;
}