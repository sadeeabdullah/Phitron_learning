#include <bits/stdc++.h>
using namespace std;

//function to get the vecotr in one
vector<int> gather(vector<int> a, vector<int> b)
{
    vector<int> result = b;
    result.insert(result.end() , a.begin(), a.end());
    return result;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    
    }
    for (int i = 0; i <n; i++)
    {
        cin >> b[i];
    }
    



    vector<int> combined = gather(a, b);

    //showing output
    for(int x: combined)
    {
        cout << x << " ";
    }
    
    return 0;
}