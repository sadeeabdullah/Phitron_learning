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

    // for taking the queries
    for (int i = 0; i < q; i++) // OPERATION COUNT : O(Q)
    {
        int x;
        cin >> x;

        int flag = 0; // for checking it is founded or not
        for (int i = 0; i < n; i++) // OPERATION COUNT : O(N)
        {
            if (x == a[i])
            {
                flag = 1;
                break;
            }
        }

        (flag) ? cout << "found" << endl
               : cout << "not found" << endl;
    } // TIME COMPLEXITY FOR THIS LOOP = O(N * Q)

    //GIVEN IN THE QUESTION: CONSTRAIN OF N AND Q IS 10^5 SO THE TOTAL TIME COMPLEXITY IN THE CODE IS 10^5 * 10^5 = 10^10. THE CODE MAY NEED 1000 S TO RUN THE CODE BECAUSE IN ONE SECOND 10^7 OPERATION CAN BE DONE. SO IF WE SUBMIT THE CODE WE WILL GET (TLE) Time Limit Exceed error.

    return 0;
}