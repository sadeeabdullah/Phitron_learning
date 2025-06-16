#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    int arr[n];

    int minimum = INT_MAX, maximum = INT_MIN;
    int min_idx, max_idx;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(minimum > arr[i])
        {
            minimum = arr[i];
            min_idx = i;
        }
        if(maximum < arr[i])
        {
            maximum = arr[i];
            max_idx = i;
        }
    }

    swap(arr[min_idx],arr[max_idx]);

    //print updated array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    //for loop to get the minimum and maximum value in the loop
    return 0;
}