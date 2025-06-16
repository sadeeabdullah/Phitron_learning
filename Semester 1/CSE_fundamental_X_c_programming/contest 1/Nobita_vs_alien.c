#include <stdio.h>

//function to sort the array in descending array
void sort_des(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        //nested for loop for comparing elements with other all elements
        for(int j = i + 1; j < n; j++){
            if (a[j] > a[i])
            {
                 int tmp = a[j]; // tmp variable to swap the value
                 a[j] = a[i];
                 a[i] = tmp;

            }
            
        }
    }
    
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];

    //taking the input for the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    sort_des(&a ,n);

    int bomb_count = 0;

    //for loop to get the usable bomb value
    // for (int i = 0, j = n - 1; i < j;)
    // {
    //     // printf("%d", a[i]);
    //     if (a[i] + a[j] <= 10)
    //     {
    //         bomb_count++;
    //         i++;
    //         j--;
    //     }else{
    //         i--;
    //     }
        
    // }

    int i = 0, j = n - 1;
    while (i < j)
    {
        if (a[i] + a[j] <= k)
        {
            bomb_count ++;
            i ++;
            j--;
        }
        else if(a[i] + a[j] > k){
            i ++;
        }
    }
    
    
    printf("%d", bomb_count);

    return 0;
}