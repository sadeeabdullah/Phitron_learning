#include<stdio.h>
int main(){
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
    
        int need_days = (m1 * d)/(m1 + m2);
        int fwr_days = d - need_days;
        printf("%d\n", fwr_days);
    }
      
    return 0;
}