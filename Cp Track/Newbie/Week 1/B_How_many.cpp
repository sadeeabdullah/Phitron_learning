// problem link: https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    
    int s, t;
    cin >> s >> t;

    // we will take 3 iterattor 
    int a, b, c;

    int count = 0;

    for (a = 0; a <= s; a++)
        for( b = 0; b <= s; b++)
            for(c = 0; c <= s; c++)
                {
                    if (a + b + c <= s && a * b * c <= t)
                        count++;
                }

    cout << count << nl;
    return 0;
}