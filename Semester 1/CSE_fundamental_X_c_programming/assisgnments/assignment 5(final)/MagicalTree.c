#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = 5;
    // for printing row or line
    for (int i = 0; i < 5 + ceil(n / 2.0); i++)
    {
        // for printing space
        for (int j = space + ceil(n / 2.0) - 1; j >= 1; j--)
        {
            printf(" ");
        }
        // for printing star or line
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star += 2;
        space--;
        printf("\n");
    }

    // for printing the 2nd column of star row
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= n; j++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}