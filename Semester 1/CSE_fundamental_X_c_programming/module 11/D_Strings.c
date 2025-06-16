#include<stdio.h>
#include<string.h>
int main(){
    char a[11],b[11];
    scanf("%s\n %s", &a, &b);
    int length_a = strlen(a); 
    int length_b = strlen(b); 
    printf("%d %d\n",length_a, length_b);
    char n[101];
    for (int i = 0; i <length_a; i++)
    {
        n[i] = a[i];
    }
    for (int i = 0; i <= length_b; i++)
    {
        n[i + length_a] = b[i];
    }
    printf("%s\n",n);

    //swapping
    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n", a, b);
    
    
    return 0;
}