#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int number = 1;
    for (int i = 1; i <= n; i++) // for printing line
    {
        // for printing space
        for(int j = 1; j <= space; j++)   {
            printf(" ");
        }

        //for printing number
        for(int j = number; j >= 1; j--){
            printf("%d", j);
        }
        printf("\n");
        space--;
        number++;
    }
    
    return 0;
}