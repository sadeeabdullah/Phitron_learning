#include <bits/stdc++.h>
#define ll long long int
#define llmax LLONG_MAX
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    while(true)
    {
        int index = s.find("EGYPT");    
        if(index != -1)
        {
            s.erase(index, 5);
            s.insert(index, " ");
        }
        else
            break;
    }

    cout << s << '\n';
    return 0;
}