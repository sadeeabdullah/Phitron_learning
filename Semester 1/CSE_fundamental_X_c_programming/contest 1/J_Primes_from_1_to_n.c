#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {

        int isPrime = 1;
        // i have to use a flag variable to make sure it is prime or not
        // because if i need to get the prime number into the nested for loop it will print manytimes which will not work as the output solution
        // nested loop to check if it is prime
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        isPrime?printf("%d ", i):"";
    }

    return 0;
}