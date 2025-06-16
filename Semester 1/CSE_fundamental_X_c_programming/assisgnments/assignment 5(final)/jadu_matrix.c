#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    int jadu_chck = 1;
    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++){
                scanf("%d", &a[i][j]);
                if (i == j  )
                {
                    if (a[i][j] != 1)
                    {
                        jadu_chck = 0; 
                    }
                    
                }
                if (i + j == n - 1)
                {
                    if (a[i][j] != 1)
                    {
                        jadu_chck = 0; 
                    }
                }
                
                if (i != j && i + j != n - 1)
                {
                    if (a[i][j] != 0)
                    {
                        jadu_chck = 0; 
                    }
                }
                
                
                
            }
        }
        if (jadu_chck == 1)
        {
            printf("YES");
        }else{
            printf("NO");
        }
        
        
    }else{
        printf("NO");
    }
    
    return 0;
}