#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if(n > 2)
    {
        for (int i = 3; i <= n; i += 2)
    {
        cout << '\\';
        for (int space = round(i / 2); space > 0; space--)
        {
            cout << " ";
        }
        cout << '/' << endl;
    }
    }
    
    // printing space before x
    // for (int space_bef = )
    // {
    //     /* code */
    // }

    cout << endl << "X" << endl;
    
    if(n > 2)
    {
        for (int i = 3; i <= n; i += 2)
    {
        cout << '/';
        for (int space = round(i / 2); space > 0; space--)
        {
            cout << " ";
        }
        cout << '\\' << endl;
    }
    }
    
    return 0;
}