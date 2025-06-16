#include <stdio.h>
#include <string.h>
#include<math.h>
int main(){
    char a[102];
    scanf("%s", &a);

    //taking variables to store the summation of even and odd digits number
    int sum_of_even_numbers = 0, sum_of_odd_numbers = 0;
    int l_n_string = strlen(a);
    for (int i = 0; i < l_n_string; i++)
{
    if ((i + 1)   % 2 == 0) // even position (2nd, 4th, ...)
    {
        // printf("the digit is even number %d digit position%d\n", i, (i + 1));
        sum_of_even_numbers += a[i] - '0';
    } else { 
        // printf("the digit is odd number %d digit position%d\n", i, (i + 1));
        sum_of_odd_numbers += a[i] - '0';
    }
}

    // getting absolute difference between even and odd summation
    int abs_difference = abs(sum_of_odd_numbers - sum_of_even_numbers);
    (abs_difference % 11 == 0)?printf("YES"):printf("NO");
    
    
    return 0;
}