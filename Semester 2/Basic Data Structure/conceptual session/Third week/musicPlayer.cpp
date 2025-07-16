#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> PlayList;
    string song;
    while (cin >> song && song != "stop")
    {
        PlayList.push_back(song);
    }

    // taking input of query
    int q;
    cin >> q;
    // taking a current pointer to track the curren iterator
    auto curr = PlayList.begin();
    while (q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "play")
        {
            string songName;
            cin >> songName;
            auto isFound = find(PlayList.begin(), PlayList.end(), songName); // find function return a iterator of the node value;
            if (isFound != PlayList.end())
            {
                curr = isFound;
                cout << "Playing " << *isFound << endl;
            }
            else
            {
                cout << "Not found" << endl;
            }
        }
        else if (cmd == "right")
        {
            if (next(curr) != PlayList.end())
            {
                curr = next(curr);

                cout << "Playing " << *curr << endl;
            }
            else
            {
                cout << "Not found" << endl;
            }
        }
        else if (cmd == "left")
        {
            if (curr != PlayList.begin())
            {
                curr = prev(curr);

                cout << "Playing " << *curr << endl;
            }
            else
            {
                cout << "Not found" << endl;
            }
        }
    }
    return 0;
}