#include<stdio.h>
int main(){
    int r, c, chck_zero = 1;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    
    //taking input of the row
    for (int i = 0; i < r; i++)
    {
        //taking input for the column
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] != 0)
            {
                chck_zero = 0;
                break;
            }
            
        }
        
    }

    if (chck_zero == 1)
    {
        printf("This is zero matrix");
    }else{
        printf("This is not zero matrix");
    }
    
}