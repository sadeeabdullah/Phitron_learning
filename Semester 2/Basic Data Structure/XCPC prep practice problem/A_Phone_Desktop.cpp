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
        int leftInScreen = screen * 7;
        if (y % 2 != 0) // its mean we need another screen to store the value
        {
            screen++;

            // when we get another value of the screen then we can add more x in it and that will be 11
            leftInScreen+= 11;
        }

        if (x > leftInScreen)
        {
            x -= leftInScreen;
            screen += x / 15;
            if (x % 15 != 0)
            {
                // we need another screen
                screen++;
            } // sample comment
        }

        cout << screen << endl;
    }
    return 0;
}