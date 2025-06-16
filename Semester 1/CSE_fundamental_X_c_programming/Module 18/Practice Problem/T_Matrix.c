#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n][n];

    int total_of_primary_diagonal = 0, total_of_secondary = 0;
    
    //taking input for the row
    for (int i = 0; i <n; i++)
    {
        //taking input of the column value
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
            if (i == j)
            {
                total_of_primary_diagonal += arr[i][j];
            }
            if (i + j == n - 1)
            {
                total_of_secondary += arr[i][j];
            }
            
            
        }
    }
    int absolute_difference = abs(total_of_primary_diagonal - total_of_secondary);
    printf("%d", absolute_difference);
    
    return 0;
}