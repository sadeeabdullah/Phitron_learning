#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    long long int summation = 1LL*x + y, multiplication = 1LL*x * y, subtraction = 1LL*x - y;
    cout << x << " + " << y << " = " << summation << endl;
    cout << x << " * " << y << " = " << multiplication << endl;
    cout << x << " - " << y << " = " << subtraction << endl;
    return 0;
}