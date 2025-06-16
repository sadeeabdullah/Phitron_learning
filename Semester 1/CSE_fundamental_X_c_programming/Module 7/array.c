#include<stdio.h>
int main(){
    int arr[5];

    //this is how we can set a value of any index in an array
    arr[2]=15;

    
    //array initialization
    //NB:when we set few or at least one value of an array it will make other value 0;
    int arr_new [5] = { 10,43, 53};
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",arr_new[i]);
    }
    return 0;
}