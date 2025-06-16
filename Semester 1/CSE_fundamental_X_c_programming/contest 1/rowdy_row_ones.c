#include <stdio.h>
#include<limits.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    //taking the row input using 
    for (int i = 0; i < n; i++)
    {
        //taking the column input
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    
    int max = INT_MIN;
    int maxRowIndex = 0;

    //summation of row
    for (int i = 0; i < n; i++)
    {
        int sum_of_row = 0;

        //taking the column input
        for (int j = 0; j < m; j++)
        {
            sum_of_row += a[i][j];
        }

        if (sum_of_row > max)
        {
            max = sum_of_row;
            maxRowIndex = i;
        }
        
    }

    printf("%d\n",maxRowIndex);
    
    
    return 0;
}