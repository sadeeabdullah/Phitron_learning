#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 3, 4, 4, 5};
    vector<int> v2 = v;

    v2.pop_back(); // this will remove one element from the last
    // vector<int> v2;
    // v2.assign(v.begin(), v.end()); // or we could use that assign function but we the good practice is use the first types

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // for (int x : v2) // range base for loop use it when you have no need to use the index base for loop
    // {
    //     cout << x << " "; // output: 1 3 4 4 5
    // }
    // cout << endl;
    for (int x : v2) // range base for loop use it when you have no need to use the index base for loop
    {
        cout << x << " "; // output: 1 3 4 4
    }
    cout << endl;

    // v.insert(pos,value); enter specific value in specific index
    v.insert(v.begin() + 2, 100);

    for (int x : v) // range base for loop use it when you have no need to use the index base for loop
    {
        cout << x << " "; // output: 1 3 100 4 4 5 
    }
    cout << endl;

    //using insert function we also can insert more than one value
    vector<int> v3 = {23, 3452, 534};
    v.insert(v.begin() + 3, v3.begin(), v3.end());
     for (int x : v) // range base for loop use it when you have no need to use the index base for loop
    {
        cout << x << " "; // output: 1 3 100 23 3452 534 4 4 5  
    }
    cout << endl;


    // v.erase(pos) it erase a specific positon value from the vector
    v.erase(v.begin() + 2);
     for (int x : v) // range base for loop use it when you have no need to use the index base for loop
    {
        cout << x << " "; // output: 1 3 23 3452 534 4 4 5  
    }
    cout << endl;

    //erasing multiple value
    v.erase(v.begin() + 2, v.begin() +  4);
    v.erase(v.begin() + 2);
     for (int x : v) // range base for loop use it when you have no need to use the index base for loop
    {
        cout << x << " "; // output: 1 3 4 4 5  
    }
    cout << endl;

    vector<int> l = {1, 3, 45, 5, 3, 5, 5};

    //replacing vector element
    // replace(vector.begin(),vector.end(),value,replace_value);
    // replace(l.begin(), l.end(), 5, 17);
    // let only replace value and keep last element outside of the replacing modification
    replace(l.begin(), l.end() - 1, 5, 17);
    for(int x : l)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}