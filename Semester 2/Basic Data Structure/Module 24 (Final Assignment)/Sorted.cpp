#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc; 
    cin >> tc;
    while (tc--)
    {

        // creating a set to get the unique and sorted value
        set <int> st;

        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int val; 
            cin >> val;
            st.insert(val);
        }

        //printing the set

        for (int x : st)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}