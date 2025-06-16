#include<stdio.h>
#include<string.h>
int main(){
    char x[21], y[21];
    scanf("%s\n %s", x, y);
    int val = strcmp(x,y);
    if (val<0)
    {
        printf("%s",x);
    }
    if (val>0)
    {
        printf("%s",y);
    }
    if (val==0)
    {
        printf("%s",x);
    }
    
    return 0;
}