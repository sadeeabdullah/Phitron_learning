#include<stdio.h>
void cnvrt( char x){
      printf("%d",x);
}
int main(){
    char ch;
    scanf("%c", &ch);
    cnvrt(ch);
    return 0;
}