#include<stdio.h>
int sub(int x, int y);
int sum(int x, int y);
int main(){
    int n, m;
    printf("Waiting...");
    scanf("%d %d",&n, &m);
    int add = sum(n,m);
    int subs = sub(n,m);
    printf("sum of the m & n: %d\n sub of m & n: %d",add,subs);
    return 0;
}

int sub(int x, int y){
    int result = x - y;
    return result;
}
int sum(int x, int y){
    int result = x + y;
    return result;
}