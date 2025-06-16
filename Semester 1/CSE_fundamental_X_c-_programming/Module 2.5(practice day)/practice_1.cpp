#include <bits/stdc++.h>
using namespace std;
int* get_array(int n){
    int *arr = new int[n]; // declaring the array dynamic memory so that the array don't get removed after the function end.
    //taking input of the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return arr;
    
}

int main(){
    int n;
    cin >> n;
    int *arr = get_array(n);

    //printing the array element
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    delete[] arr;
    
    return 0;
}