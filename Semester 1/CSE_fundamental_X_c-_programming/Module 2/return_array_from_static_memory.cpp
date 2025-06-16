#include <bits/stdc++.h>
using namespace std;
// return static from function
int* fun(){ // we returning an array from the function so as we know that array is also and pointer and it will return the first element memory location or number

    //int a[5]; // as it is in static memory it will not return the value from the function as it clear all of its own

    int *a = new int[5]; // it will return the values of array
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
    
}

int main(){
    int *a = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}