#include <bits/stdc++.h>
using namespace std;
int main(){
    char x;
    cin >> x;
    if (x >= 'a' && x <= 'z')
    {
        cout << "ALPHA\nIS SMALL" << endl;
    }else if (x >= 'A' && x <= 'Z')
    {
        cout << "ALPHA\nIS CAPITAL" << endl;
    }else if(x >= '0' && x <= '9'){
        cout << "IS DIGIT";
    }
    
    
    return 0;
}