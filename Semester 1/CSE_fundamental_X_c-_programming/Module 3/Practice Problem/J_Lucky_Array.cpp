#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    // we take index 0 is the minimum value;
    int minimum = arr[0];

    for (int i = 1; i < a; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    // count variable
    int count = 0;

    // count how many times minimum has been used in array
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == minimum)
        {
            count++;
        }
    }

    (count % 2 == 0) ? cout << "Unlucky" << endl : cout << "Lucky" << endl;

    return 0;
}