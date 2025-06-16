#include <iostream>
using namespace std;
int main()
{

    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Saturday\n";
        break;
    case 2:
        cout << "Sunday\n";
        break;
    case 3:
        cout << "Monday\n";
        break;
    case 4:
        cout << "Tuesday\n";
        break;
    case 5:
        cout << "Wednesday\n";
        break;
    case 6:
        cout << "Thursday\n";
        break;
    case 7:
        cout << "Friday\n";
        break;
    default:
        cout << "Not a day\n";
    }


    //or if you want to check with and condition you have to write down it the switch
    // switch case is used mostly if any condition is satisfied then it will work for the rest case in it.
    // N.B: no need to write the break in that case;
    switch(day % 2) // here possible case is 1 or 0: 1 means reminder will be 1 and 0 means reminder will be  0 means the number is even
    {
        case 1:
            cout << "odd day\n";
            break;
        case 0:
        cout << "even day\n";
    }
    return 0;
}
