#include<stdio.h>
int main(){
    int initial, given, bought;
    scanf("%d %d %d", &initial, &given, &bought);
    int have = (initial - given) + bought;
    printf("%d", have);
    return 0;
}