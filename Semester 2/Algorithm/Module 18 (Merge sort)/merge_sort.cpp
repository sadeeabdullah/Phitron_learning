#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


//creating conquer function that will merge the array element
void conquer (int arr[], int l, int mid, int r)
{
    int n = mid - l + 1;

    // taking first arrray 
    int l_arr[n];
    int k = l;
    for(int i =0;i < n; i++, k++)
    {
        l_arr[i] = arr[k];
    }

    //for the second array
    int m = r - mid;
    int r_arr[m];
    k = mid + 1;//// cmt
    for(int i = 0; i < m; i++, k++)
    {
        r_arr[i] = arr[k];
    }

    int i = 0, j = 0, curr = l;

    while(i < n && j < m)
    {
        if (l_arr[i] < r_arr[j])
        {
            arr[curr++] = l_arr[i++];
        }
        else{
            arr[curr++] = r_arr[j++];
        }
    }

    // if any element left
    while(i < n)
    {
        arr[curr++] = l_arr[i++];
    }

    while (j < m)
    {
        arr[curr++] = r_arr[j++];
    }
}

// creating divide recursive function
void divide(int arr[], int l, int r)
{
    // here is the base case
    if (l >= r)
        return;

    int mid = (l + r) / 2; // getting the mid of the array
    divide(arr, l, mid);
    divide(arr, mid + 1, r);

    // calling the conquer function after dividing the array 
    conquer(arr, l, mid, r);
}
int main ()
{
    fastIO();
    
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // now lets call divide functin
    divide(arr,0, n - 1);


    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << nl;
    return 0;
}