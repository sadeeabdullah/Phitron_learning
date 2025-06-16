#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    int arr[x];
    //taking input of the array element
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    
    int mx = INT_MIN;
    for (int i = 0; i < x; i++)
    {
       mx =  max(mx,arr[i]);
    }

    cout << mx << endl;    
    
    return 0;
}