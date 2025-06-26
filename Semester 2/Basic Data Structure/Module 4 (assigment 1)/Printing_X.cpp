#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int space = n - 2;
    int space_bef = 0;
    for (int i = n / 2; i > 0; i--)
    {
        // for loop for printing space before
        for (int i = 0; i < space_bef; i++)
        {
            cout << " ";
        }

        cout << "\\";
        for (int i = space; i > 0; i--)
        {
            cout << " ";
        }
        cout << "/" << endl;
        space -= 2;
        space_bef++;
    }
    for(int i = space_bef; i > 0; i--)
    {
        cout << " ";
    }
    cout << "X" << endl;
    space_bef--;
    for (int i = n / 2; i > 0; i--)
    {
        // for loop for printing space before
        for (int i = space_bef - 1; i >= 0; i--)
        {
            cout << " ";
        }

        cout << "/";
        for (int i = 0; i <= space + 1; i++)
        {
            cout << " ";
        }
        cout << "\\" << endl;
        space += 2;
        space_bef--;
    }

    return 0;
}