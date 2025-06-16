#include <bits/stdc++.h>
using namespace std;

//declaring class object
class Cricketer
{
    public:
    int jersey_no;
    string country;
};

int main(){

    Cricketer *dhoni = new Cricketer();

    dhoni->jersey_no = 7;
    dhoni->country = "India";

    //Cricketer *kohli = dhoni; it would not work after deleting because this pointing to the 

    Cricketer *kohli = new Cricketer();
    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;
    delete dhoni;

    // cout << dhoni->country << " " << dhoni->jersey_no << endl;
    cout << kohli->country << " " << kohli->jersey_no << endl;
    
    return 0;
}