#include<stdio.h>
int main(){
    int n;
    long long int numbers, sum = 0;
    scanf("%d\n %lld", &n, &numbers);
    // printf("%d", numbers %10);
    for (int i = 0; i < n; i ++)
    {
        sum += numbers % 10;
        numbers /= 10;
    }
    if (sum % 3 == 0)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    
    return 0;
}