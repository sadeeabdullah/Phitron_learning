#include<stdio.h>
#include<math.h>
int main(){
    int ans = ceil(4.3);
    int ans2 = floor(4.3);
    int ans3 = round(4.3);
    int ans4 = round(4.5);
    int ans5 = sqrt(4);
    double ans6 = sqrt(4.5);
    int ans7 = pow(4, 2);
    int ans8 = abs(-10);

    printf("%d %d %d %d %d %lf %d %d", ans, ans2, ans3, ans4, ans5, ans6,ans7, ans8);
    return 0;
}