#include<stdio.h>
void fun(int* x){
    *x = 20; //by default pass by value thats why we have to take the refference.

}
void fun2(int arr[], int n){ // by default pass by refference 
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int x = 534;
    fun2(arr,n);
    
    
    return 0;
}