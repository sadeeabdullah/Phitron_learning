// problem link : 
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    
    int n;
    cin >> n;
    deque<string> chats;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        for (auto it = chats.begin(); it != chats.end(); it++)
        {
            if (*it == name)
            {
                *it= "#";
                break;
            }
        }
        chats.push_front(name);
    }
    for (auto name : chats)
    {
        if (name != "#")
        cout << name << nl;
    }
    return 0;
}