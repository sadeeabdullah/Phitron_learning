//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include<stdio.h>
int main(){
    int N,num;
    int even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d",&N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d",&num);

        if (num % 2 == 0)
        {
            even ++;
        }
        if (num % 2 != 0)
        {
            odd ++;
        }
        if (num > 0)
        {
            positive ++;
        }
        if (num < 0)
        {
            negative ++;
        }
        
        
        
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",positive);
    printf("Negative: %d\n",negative);
    return 0;
}