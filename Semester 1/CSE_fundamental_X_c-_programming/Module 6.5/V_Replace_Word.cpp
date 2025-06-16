#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    while (1) // this mean the condition is true always but we will stop or break the condition inside the loop
    {
    int index = s.find("EGYPT");

    if(index != -1) // it basically return the index of the first character or return -1 if it doesn't find EGYPT   
    {
        // replace(s.find("EGYPT"),5, " ");
        s.erase(index, 5);
        s.insert(index, " ");
    }
    else
    {
        break;
    }
    }
    

    cout << s << endl;
    return 0;
}