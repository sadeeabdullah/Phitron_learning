#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) // for loop for test cases
    {
        int n;
        cin >> n;
        int arr[n ];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        

        //getting the pair i and j and get a[i] + a[j] + j - i

        int result = INT_MAX;

        for (int i = 0; i <n; i++)
        {

            
            for(int j = i + 1; j < n; j++){
                
                int each_result = (arr[i] - i) + (arr[j] + j);
                result = min(result, each_result);
            }
        }

        

        cout << result << endl;
    }

    return 0;
}