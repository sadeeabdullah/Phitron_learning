// problem link : https://codeforces.com/problemset/problem/2000/C

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

const int N = 2e5 + 10;
int main()
{
    fastIO();

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            if (s.size() != n)
            {
                cout << "NO" << nl;
                continue;
                
            }

            map<int, char>num_to_char;
            map<char, int> char_to_num;

            for(int i = 0; i < n; i++)
            {
                num_to_char[arr[i]] = s[i];
                char_to_num[s[i]] =arr[i];
            }

            bool flag = true;
            for(int i = 0; i < n; i++)
            {
                int num = arr[i];
                int c = s[i];

                if(num_to_char[num] != c)
                {
                    flag = false;
                    break;
                }

                if (char_to_num[c] != num)
                {
                    flag = false;
                    break;
                }
            }

            cout << ((flag) ? "YES": "NO") <<nl;
        }
    }
    return 0;
}