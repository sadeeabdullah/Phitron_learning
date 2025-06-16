#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int m;
    scanf("%d", &m);
    int s[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &s[i]);
    }

    int cp_arr[n + m];
    for (int i = 0; i < n; i++)
    {
        cp_arr[i] = a[i];
    }
    
    for (int i = n, j = 0 ; i < n + m, j <= m; i++, j++)
    {
        cp_arr[i] = s[j];
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", cp_arr[i]);
    }
    
    
    return 0;
}