#include <stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    
    //printf("%d",strcmp(a,b)); //if  it provide negative value then the first one is smaller or if it gives positive value the second one is smaller or if it gives 0 then the both string is equal

    int val = strcmp(a,b);
    if (val<0)
    {
        printf("A is smaller");
    }else if(val>0){
        printf("B is smaller");
    }else{
        printf("Equal");
    }
    

    return 0;
}