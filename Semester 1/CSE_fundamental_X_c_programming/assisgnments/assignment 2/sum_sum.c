#include<stdio.h>
int main(){
    int n, n_value, sum_positive = 0, sum_negative = 0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&n_value);
        if (n_value >= 0)
        {
            sum_positive += n_value;
        }else{
            sum_negative += n_value;
        }
        
    }
    printf("%d %d", sum_positive, sum_negative);
    
    return 0;
}