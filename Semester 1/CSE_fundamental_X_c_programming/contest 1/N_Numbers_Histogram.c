#include <stdio.h>
int main(){
    int s, n;
    scanf("%c\n%d", &s, &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        for (int j = 0; j < arr[i]; j++)
        {
            printf("%c", s);
        }
        printf("\n");
        
    }
    
    return 0;
}