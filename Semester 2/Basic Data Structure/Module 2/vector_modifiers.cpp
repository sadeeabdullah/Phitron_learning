#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 3, 4, 4, 5};
    vector<int> v2 = v; // if the size are different then TC: O(N),otherwise O(1)

    v2.pop_back(); // this will remove one element from the last --> TC: O(1) same goes for push back
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
    v.insert(v.begin() + 2, 100); // TC: O(N + K) where K is the number of elements to be inserted and N is the iterator from where the element is getting inserted

    for (int x : v) // range base for loop use it when you have no need to use the index base for loop
    {
        cout << x << " "; // output: 1 3 100 4 4 5
    }
    cout << endl;

    // using insert function we also can insert more than one value
    vector<int> v3 = {23, 3452, 534};
    v.insert(v.begin() + 3, v3.begin(), v3.end()); // TC: O(N + K) where K is the number of elements to be inserted and N is the iterator from where the element is getting inserted

    for (int x : v) // range base for loop use it when you have no need to use the index base for loop
    {
        cout << x << " "; // output: 1 3 100 23 3452 534 4 4 5
    }
    cout << endl;

    // v.erase(pos) it erase a specific positon value from the vector
    v.erase(v.begin() + 2); //TC: same as insert
    for (int x : v) // range base for loop use it when you have no need to use the index base for loop
    {
        cout << x << " "; // output: 1 3 23 3452 534 4 4 5
    }
    cout << endl;

    // erasing multiple value
    v.erase(v.begin() + 2, v.begin() + 4);//TC: same as insert
    v.erase(v.begin() + 2);//TC: same as insert
    for (int x : v) // range base for loop use it when you have no need to use the index base for loop
    {
        cout << x << " "; // output: 1 3 4 4 5
    }
    cout << endl;

    vector<int> l = {1, 3, 45, 5, 3, 5, 5};

    // replacing vector element
    //  replace(vector.begin(),vector.end(),value,replace_value);
    //  replace(l.begin(), l.end(), 5, 17);
    //  let only replace value and keep last element outside of the replacing modification
    replace(l.begin(), l.end() - 1, 5, 17); // TC: O(N)
    for (int x : l)
    {
        cout << x << " ";
    }
    cout << endl;

    // find(l.begin(), l.end(), searching_element);
    // vector<int>::iterator it = find(l.begin(), l.end(), 45); // find function return iterator
    auto it = find(l.begin(), l.end(), 45); // find function return iterator . here auto keyword identify the datatype by itself. // TC: O(N)

    cout << *it << endl; // it shows the value we are searching for. because we are dereferencing it
    // if the iterator went to the end of the vector then the searching element is not founded
    cout << (it == v.end() ? "Not found" : " found");
    return 0;
}