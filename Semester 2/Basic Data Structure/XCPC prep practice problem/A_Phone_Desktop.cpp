#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y;
        cin >> x >> y;

        // screen left after 2 y in one screen (5*3) - 8 = 7
        int screen = y / 2;
        int leftScreen = screen * 7;
        if (y % 2 == 1)
        {
            screen++;

            // counting for left cell
            leftScreen +=11;
        }

        // if left after filling the left screen
        if (x > leftScreen)
        {
            x -= leftScreen;

            screen += x / 15;
            if (x % 15 != 0)
            {
                screen++;
            }
        }

        cout << screen << endl;
    }
    return 0;
}