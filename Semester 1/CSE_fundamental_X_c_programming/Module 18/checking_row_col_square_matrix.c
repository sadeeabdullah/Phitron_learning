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

    if (r == 1)
    {
        printf("This is row matrix");
    }else if(c == 1){
        printf("This is row matrix");
    }else if (r == c)
    {
        printf("This is square matrix");
    }
    
    
    
    return 0;
}