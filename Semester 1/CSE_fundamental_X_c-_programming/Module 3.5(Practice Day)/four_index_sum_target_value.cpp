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

    int target ;
    cin >> target;

    int flag = 0;
    
    for (int i = 0; i < n - 3; i++)
    {
        int sum =  arr[i];
        int copyI = i;
        for(int j = i + 1; j < i + 4; j++)
        {

            sum += arr[j];

        }
        if(sum == target)
        {
            cout << "YES";
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        cout << "NO";
    }
    
    return 0;
}