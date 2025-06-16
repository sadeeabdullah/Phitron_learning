#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    int e_count = 0;
    int g_count = 0;
    int y_count = 0;
    int p_count = 0;
    int t_count = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'e' || s[i] == 'E' )
        {
            e_count++;
        }
        if(s[i] == 'g' || s[i] == 'G' )
        {
            g_count++;
        }
        if(s[i] == 'y' || s[i] == 'Y' )
        {
            y_count++;
        }
        if(s[i] == 'p' || s[i] == 'P' )
        {
            p_count++;
        }
        if(s[i] == 't' || s[i] == 'T' )
        {
            t_count++;
        }
    }


    if(e_count > 0 && g_count > 0 && p_count > 0 && t_count >0  && y_count > 0)
    {
        cout << min({e_count, g_count, p_count, t_count, y_count});
    }
    else{
        cout << "0";
    }


    return 0;
}