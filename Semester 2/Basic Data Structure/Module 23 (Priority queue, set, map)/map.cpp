#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp; // counting string thats why at first we have to write the key type then the count mean the int value

    mp["tamim"] = 2;
    mp["ramim"] = 5;
    mp["shamim"] = 20;
    mp["famim"] = 267;

    
    //using iterator to print the key and value
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        string key = it->first;
        int val = it->second;
        cout << key << " = " << val << endl;
    }
    cout << mp["famim"] << endl;
    mp["khairul"] = 0;
    
    // here can be two scenario
    // 1 : the key is not the in the map then it will return 0
    cout << mp["hamim"] << endl;  // output = 0

    // 2 : the key is in the map but the count value is 0
    cout << mp["khairul"] << endl; // output = 0


    // now the question comes up on your mind how we will know is it in the map or not

    // for the that problem maps comes out with a solution which is .count function it returns true or false according to the availablity the key in the map

    if (mp.count("rabbi"))
        cout << "ache" << endl;
    else    
        cout << "naire vai nai" << endl;
    return 0;
}