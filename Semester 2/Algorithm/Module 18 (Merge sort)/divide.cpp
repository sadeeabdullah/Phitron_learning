#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

// creating divide function : it will divide untill we have only one element in one array
void divide (int arr[], int l, int r)
{
    //printing for check
    for (int i = l; i <= r; i++)
    {
        cout << arr[i] << " ";
    }
    cout << nl;
    //base case here
    if (l >= r)
        return;

    // getting the mid every time
    int mid = (l + r) / 2;
    // recursive call here
    divide(arr, l, mid);
    divide(arr, mid + 1, r);
}
int main ()
{
    fastIO();
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    divide(a, 0, n - 1);
    return 0;
}