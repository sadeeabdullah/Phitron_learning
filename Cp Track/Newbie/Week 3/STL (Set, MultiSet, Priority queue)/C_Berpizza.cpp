// problem llink : https://codeforces.com/problemset/problem/1468/C

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    fastIO();

    int q;
    cin >> q;
    set<pair<int, int>> st;

    multiset<pair<int, int>> ml;

    vector<int> ans;
    int customerNo = 1;

    for (int i = 0; i < q; i++)
    {
        int type;
        cin >> type;
        if(type == 1)
        {
            int x;  cin >> x;
            st.insert({customerNo, x});
            ml.insert({x, -customerNo});             // in pair they sort on the first value and the same value is also sorted on their second value ascending
            customerNo++;
        }
        else if (type ==2)
        {
            int pos = st.begin()->first, money = st.begin()->second;
            ans.push_back(pos);
            st.erase(st.begin());
            ml.erase({money, -pos});
        }
        else 
        {
            int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            st.erase({pos,money});
        }
    }

    for(auto val : ans)
    {
        cout << val <<" ";
    }
    cout <<nl;

    return 0;
}