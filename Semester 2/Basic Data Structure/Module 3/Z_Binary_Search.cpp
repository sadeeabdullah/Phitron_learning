#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)  // OPERATION COUNT : O(N)
    {
        cin >> a[i];
    }

    sort(a, a + n); // OPERATION COUNT : O(N logN)

    // for taking the queries
    for (int i = 0; i < q; i++) // OPERATION COUNT : O(Q)
    {
        int x;
        cin >> x;

        int l = 0, r = n - 1;
        
        int flag = 0;

        while( l <= r)
        {
            int mid = (l + r) / 2;
            if(a[mid] == x)
            {
                flag = 1;
                break;
            }
            else if(a[mid] <  x)
            {
                l = mid + 1;
            }
            else if(a[mid] > x)
            {
                r = mid - 1;
            }
        }
        (flag == 1) ? cout << "found" << endl
               : cout <<"not found" << endl;


    } // TIME COMPLEXITY FOR THIS LOOP = O(Q logN)

    //GIVEN IN THE QUESTION: CONSTRAIN OF N AND Q IS 10^5 SO THE TOTAL TIME COMPLEXITY IN THE CODE IS 10^5 * log 10^5 < 10^7. THE CODE MAY NEED 1000 S TO RUN THE CODE BECAUSE IN ONE SECOND 10^7 OPERATION CAN BE DONE. SO IF WE SUBMIT THE CODE WE WILL NOT GET (TLE) Time Limit Exceed error.

    return 0;
}      