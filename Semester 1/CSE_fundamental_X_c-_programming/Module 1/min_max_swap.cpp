#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    // if (a < b)
    // {
    //     cout << a << endl;
    // }else{
    //     cout << b << endl;
    // } without writing down the whole 6 line instead we can use a built in function name min and for that  we need to include algorithm file
    
    cout << min(a, b) << endl;

    //likely we can use max to get the maximum value;
    cout << max(a, b) << endl;


    // N.B : we can take more than 2 to get the maximum or minimum value;
    // but we have to add {} in that case;
    int c, d, e, f;
    cin >> c >> d >> e >> f;
    cout << min({c, d, e, f}) << endl;
    cout << max({c, d, e, f}) << endl;


    // how we used temp for swapping
    // int tmp = a;
    // a = b;
    // b = tmp;
    // cout << a <<" " << b <<endl;

    // instead we can use built in function 
    swap(a,b);
    cout << a <<" " << b <<endl;
    return 0;
}