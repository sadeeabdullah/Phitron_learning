#include<stdio.h>
int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    
    //taking input of the row
    for (int i = 0; i < r; i++)
    {
        //taking input for the column
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    //showing output of the row
    for (int i = 0; i < r; i++)
    {
        //showing output for the column
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}