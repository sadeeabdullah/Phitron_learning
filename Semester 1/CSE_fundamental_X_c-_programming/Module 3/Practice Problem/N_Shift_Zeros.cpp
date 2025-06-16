#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // we will check which index element is not 0 when we get the index
    int insertPos = 0; // we assume that the first insert position of the non zero element will be 0 and we will increase if it is not

    // checking in which index we get the 0 value
    for (int i = 0; i < n; i++)
    {

        if (arr[i] != 0)
        {
            arr[insertPos ++] = arr[i];
        }
    }

    
    while (insertPos < n)
    {
        arr[insertPos++] = 0;
    }
    

    // printing new updated array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}