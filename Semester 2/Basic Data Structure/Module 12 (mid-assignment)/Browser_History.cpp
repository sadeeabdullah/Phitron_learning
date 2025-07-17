#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> l;
    auto curr = l.begin();

    string address;

    // taking insert the list element
    while (cin >> address && address != "end")
    {
        l.push_back(address);
    }

    int q;
    cin >> q;
    string finding_address;
    while (q--)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "visit")
        {
            cin >> finding_address;
            auto it = find(l.begin(), l.end(), finding_address);
            if (it != l.end())
            {
                cout << *it << endl;
                curr = it;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "prev")
        {
            if (curr != l.begin())
            {
                curr = prev(curr);
                cout << *curr << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "next")
        {
            if (next(curr) != l.end())
            {
                curr = next(curr);
                cout << *curr << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}