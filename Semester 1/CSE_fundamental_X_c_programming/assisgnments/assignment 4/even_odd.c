#include<stdio.h>
void odd_even();
int main(){
    
    odd_even();
    
    return 0;
}
void odd_even(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) //taking input of the array element
    {
        scanf("%d", &arr[i]);
    }
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 ==  0)
        {
            even++;
        }else if(arr[i] % 2 != 0){
            odd++;
        }
        
    }
    printf("%d %d", even, odd);
    
}