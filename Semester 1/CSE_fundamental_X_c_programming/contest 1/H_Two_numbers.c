#include<stdio.h>
#include<math.h>
int main(){
    int a;
    float b;
    scanf("%d %f", &a, &b);
    float f =floor( a / b);
    float c =ceil( a / b);
    float r =round( a / b);
    printf("floor %d / %.0f = %.0f\n", a, b, f);
    printf("ceil %d / %.0f = %.0f\n", a, b, c);
    printf("round %d / %.0f = %.0f\n", a, b, r);
    return 0;
}