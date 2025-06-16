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

    int sp_r;
    scanf("%d", &sp_r);

    //showing specific row 
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr[sp_r][j]);
        }
    
    return 0;
}