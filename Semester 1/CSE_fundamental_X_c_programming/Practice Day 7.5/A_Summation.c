//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include<stdio.h>
#include<math.h>
int main(){
    int arr_para,n;
    long long int sum =0;
    scanf("%d",&arr_para);
    int arr[arr_para];
    for (int i = 0; i < arr_para; i++)
    {
        scanf("%d",&n);
        sum+=n;
    }
   
    
    printf("%lld",llabs(sum));
    
    return 0;
}