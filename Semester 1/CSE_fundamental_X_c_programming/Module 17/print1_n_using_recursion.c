#include<stdio.h>

void print1_n(int i){
    i++;
    printf("%d\n", i);
    if (i == 5)
    {
        return;
    }
    print1_n( i);
    
}

int main(){
    int i = 0; 
    print1_n(i);
    return 0;
}