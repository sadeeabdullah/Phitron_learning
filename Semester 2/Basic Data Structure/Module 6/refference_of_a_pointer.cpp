#include <bits/stdc++.h>
using namespace std;

// void fun(int* p)
void fun(int* &p)
{
    *p = 100; // first it dereffence the pointer then it will goes to x address as we have setted the pointer as the address of x and eventuall change it.

    // int y = 200;
    // p = &y;


    cout << " into fun " << *p << endl; // here we will get 200 because we changed the pointer into this function and now it points to y but doesn't effect on the main function because we are not using any refference here to the main function or we don't have any connection to the main function.

    // TO MAKE THE CONNECTION WE HAVE TO USE REFFERENCE WITH THE MAIN FUNCTION WE HAVE TO USE THE PARAMETER AS REFFERENCE IN THIS FUNCTION LIKE : void fun(int* &p)

    //AFTER YOU PRINT THE VALUE OF *P YOU WILL GET 200 IN THIS FUNCTION 200 IT IS NORMAL BUT IN MAIN FUNCTION YOU WILL GET 0 BECAUSE AFTER EXECUTION COMPLETED OF THIS FUNCTION THE Y DOESN'T EXIST

    // NOW WE WILL CHECK THE ADDRESS OF THE POINTER IN BOTH TO ENSURE IF THEY ARE CONNECTED OR NOT
    cout << "from the fun function address " << p << endl; // see they are same that means they  are connected now.
}
int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    cout <<"in main" <<  *p << endl;
    cout <<"in main address " <<  p << endl;

    return 0;
}