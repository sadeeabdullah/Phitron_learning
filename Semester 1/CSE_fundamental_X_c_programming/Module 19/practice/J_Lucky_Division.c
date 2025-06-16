#include <stdio.h>
#include <stdbool.h>
//function to check if a number is lucky or not
// all lucky number does have only 4 and 7 or  4 and 7 both

bool is_lucky(int num){
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 4 && digit != 7)
        {
            return false;
        }
        num /= 10;
        
        
    }
    return true;
    
}
//almost lucky number is also divisible by some ( it can be more than 2)
// we will find the lucky numbers from 1 to n and check if any lucky number can divide the given number then the number is lucky other wise not(and operator)

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (is_lucky(i) && n % i == 0)
        {
            printf("YES");
            return 0;
        }
        
    }
    printf("NO");
    
    return 0;
}