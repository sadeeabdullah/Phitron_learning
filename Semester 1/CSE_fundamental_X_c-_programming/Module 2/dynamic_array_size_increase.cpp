// trying to increase array size in static memory
#include <bits/stdc++.h>
using namespace std;
int main(){
    //int arr[5];// here we are declaring a static array so even we got a new array brr to store another new 2 element we stil can't delete the arr array and it will waste the memory space
    
    //over all process is same the plus is only using the dynamic or heap memory that we can delete the arr array it.
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // we can't increase the size of a static array so we have to take another array to add another value in it.
    int brr[7];
    for (int i = 0; i < 7; i++)
    {
        brr[i] = arr[i];
    }
    // putting another value in the last two memory location
    brr[5] = 8;
    brr[6] = 76;

    delete[] arr; //have to use the array sign with delete.

    for (int i = 0; i < 7; i++)
    {
        cout << brr[i] << " ";
    }
    
    
    return 0;
}