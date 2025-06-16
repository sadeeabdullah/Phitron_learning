//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    //taking input of the value in the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    //using 2 pointer technique to reverse the array.
    int i = 0, j = n - 1;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    //showing the updated array
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}