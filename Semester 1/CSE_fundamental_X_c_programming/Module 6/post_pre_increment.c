#include<stdio.h>
int main(){
    int x = 10;
    int f =  10;
    //post increment: will increase the value after execution
    int y = x ++;
    //pre increment: will  increase the value before any other execution
    int z = ++f;
    printf("%d %d\n",f,z);
    printf("%d %d \n",x,y);

    //in loop it doesn't matter that we are using pre or post increment because we are not using this into the loop directly
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n",i);
    }
    for (int i = 1; i <= 5; ++i)
    {
        printf("%d\n",i);
    }
    
    return 0;
}