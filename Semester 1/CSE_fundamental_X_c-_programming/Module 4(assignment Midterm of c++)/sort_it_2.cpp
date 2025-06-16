#include <bits/stdc++.h>
using namespace std;

// declare and defining the function
int *sort_it(int n)
{
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());

    return arr;
    
}

int main()
{
    int n;
    cin >> n;

    int *return_arr = sort_it(n);
    for (int i = 0; i < n; i++)
    {
        cout << return_arr[i] << " ";
    }
    
    return 0;
}