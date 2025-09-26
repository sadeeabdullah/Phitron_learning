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

    int eCnt =  0, gCnt =  0, yCnt =  0,pCnt =  0, tCnt =  0;

    for(char c : s)
    {
        c = tolower(c);
        if (c == 'e')   
            eCnt++;
        else if (c == 'g')   
            gCnt++;
        else if (c == 'y')   
            yCnt++;
        else if (c == 'p')   
            pCnt++;
        else if (c == 't')   
            tCnt++;
    }

    cout << min(eCnt,min(gCnt, min(yCnt,min(pCnt,tCnt)))) << '\n';

    return 0;
}