#include <bits/stdc++.h>
using namespace std;
// lets prove that heap memory dont auto delete the variable when the function execution is done.

// taking a global variable of pointer so that we can access it from anywhere in this code
int *p;

// declaring the function
void fun()
{
    //( int x = 10;
    // p = &x;  ) for checking static memory

    // now checking for heap memory
    int *x = new int;
    *x = 10;
    p = x;
    cout << "Fun -->" << *p << endl;
    return;
}

// using heap memory after running the function it will not remove the variable

int main()
{
    // to access the heap memory you have to use a keyword
    //  in static memory it will allocate a memory space for the value but in heap memory it will return the address of the memory location so we have to take it as pointer

    // dynamic variable declare;
    //  int *p = new int;
    //  *p = 100;
    //  cout << *p << endl;

    fun();
    cout << "Main -->" << *p << endl; // sometime you will not get the right answer in windows so you can test it online compiler basically in static 
    
    // we can remove or delete the variable in dynamic memory lets see how:
    int *f = new int;
    delete f;
    return 0;
}