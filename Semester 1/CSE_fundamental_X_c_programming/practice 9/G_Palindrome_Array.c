//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include<stdio.h>
int main(){
    int n, checker = 1;
    scanf("%d",&n);
    int arr[n];

    //taking input of the value in the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int i = 0, j = n-1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            checker = 0;
        }
        i++;
        j--;
        
    }
    
    if (checker == 1)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    
    return 0;
}