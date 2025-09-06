#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int max = INT_MIN;
        int max_i = -1;
        int second_max = INT_MIN;
        int second_max_i = -1;
        int n;
        cin >> n;
        vector<int> arr_h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr_h[i];
            if (arr_h[i] > max)
            {
                second_max = max;
                second_max_i = max_i;
                max = arr_h[i];
                max_i = i;
            }
            else if(arr_h[i] < max && arr_h[i] > second_max)
            {
                second_max = arr_h[i];
                second_max_i = i;
            }
        }

        if (max_i < second_max_i)
            cout << max_i << " " << second_max_i << endl;
        else
            cout << second_max_i << " " << max_i << endl;
    }
    return 0;
}