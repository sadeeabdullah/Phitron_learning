// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

#include <stdio.h>
int main()
{
    int T,n;
    scanf("%d",&T);
    for (int tc = 1; tc <= T; tc++)
    {
    int  digit;
    scanf("%d", &n);
    int updation = n;
    
    
   
    do
    {

        digit = updation % 10;
        updation = updation / 10;
        printf("%d ", digit);
    }while(updation != 0);
    printf("\n");

    }

    return 0;
}