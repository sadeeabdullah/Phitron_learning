#include<stdio.h>
#include<stdbool.h>
int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int diagonal_val_chck = true;
    
    //taking input of the row
    for (int i = 0; i < r; i++)
    {
        //taking input for the column
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
           
            if (i + j != r - 1)
            {
                if (arr[i][j] != 0)
            {
                diagonal_val_chck = false;
                break;
            }
            }
            
            
            
        }
        
    }

    if (r == c && diagonal_val_chck )
    {
        printf("This is diagonal matrix");
    }else{
        printf("This is not diagonal matrix");
    }
    
}