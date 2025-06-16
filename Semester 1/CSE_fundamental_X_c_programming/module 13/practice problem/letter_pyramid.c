#include<stdio.h>
int main(){
    int n;
    scanf("%d" ,&n);

    int letter_update = 1;
    int space = n;

    //for loop for printing line
    for (int  i = 1; i <= n; i++)
    {

        //for loop for adding space
        for (int  j = space - 1; j >= 0; j--)
        {
            printf(" ");
        }
        
        //for loop for printing letter
        for (int j = 0; j < letter_update; j++)
        {
            printf("%c" , 'A' + j);
        }
        printf("\n");
        letter_update +=2;
        space --;
        
    }
    
    return 0;
}