#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //ascending order sorting
    sort(arr, arr+n); // built in function for sorting in ascending order
    // sort(arr, arr+n , greater<int>()); // for sorting in descending order
    for (int i = 0; i < n; i++)
    {
        cout <<  arr[i] << " ";
    }
    
    return 0;
}