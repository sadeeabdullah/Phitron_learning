#include<stdio.h>
#include<stdbool.h>
int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    int diagonal_val = 1;
    int scalar_chck = true;

   if (r == c)
   {
     //taking input of the row element
    for (int i = 0; i < r; i++)
    {
        // taking input of the column element
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
            if (i != j)
            {
                if (arr[i][j] != 0)
                {
                    scalar_chck = false;
                }
                
            }
            if (i == j)
            { if (arr[i][j] != diagonal_val)
                {
                    scalar_chck = false;
                }
                
                
            }
            
            
        }
    }
    if (scalar_chck)
    {
        printf("This is unit  diagonal matrix");
    }else{
    printf("This is not unit  diagonal matrix");
   }
    
}else{
    printf("This is not unit  diagonal matrix");
   }
   
    
    return 0;
}