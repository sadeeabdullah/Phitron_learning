#include<stdio.h>
#include<math.h>
#define PI 3.141592653
int main(){
    float r;
    scanf("%f", &r);
    double area = PI * pow(r,2);
    printf("%.9f",area);
    return 0;
}