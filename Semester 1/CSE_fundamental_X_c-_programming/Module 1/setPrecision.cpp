#include <iostream>
#include <iomanip> // input output manipulation
using namespace std;
int main(){
    double d = 23.432423;
    cout << fixed << setprecision(3) << d << endl;
    //cout << d << endl; // default will print 4 digit after .
    return 0;
}

// when we need to print the fixed digits after . in double value we have to use setprecision likely we used ".3lf" in programming c;
