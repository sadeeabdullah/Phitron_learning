#include <bits/stdc++.h>
using namespace std;

// insert function
void insertMinHeap(vector<int> &a, int val)
{
    a.push_back(val);
    int curr_idx = a.size() - 1;

    while (curr_idx > 0)
    {
        int parent_idx = (curr_idx - 1) / 2;
        if (a[curr_idx] < a[parent_idx])
        {
            swap(a[curr_idx], a[parent_idx]);
            
        }
        else
            break;
        curr_idx = parent_idx;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    

    int val;
    cin >> val;
    insertMinHeap(a,val);

    for (int val : a)
    {
        cout << val << " ";
    }
    return 0;
}