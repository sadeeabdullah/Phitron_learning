#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n ;
    int arr[n];
    //taking input of the array element
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1, j = 0; i > j; i--, j++)
    {
        swap(arr[i],arr[j]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}