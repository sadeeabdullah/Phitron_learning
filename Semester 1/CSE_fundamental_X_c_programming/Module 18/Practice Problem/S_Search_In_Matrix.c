#include<stdio.h>
#include<stdbool.h>
int main(){
    int n, m, given_num;
    scanf("%d %d", &n, &m );
    int arr[n][m];

    int will_take = false;

    //taking input of the row value
    for (int i = 0; i < n; i++)
    {
        // taking input of the column value
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
    }
    }
    scanf("%d", &given_num);
    //taking output of the row value
    for (int i = 0; i < n; i++)
    {
        // taking output of the column value
        for(int j = 0; j < m; j++){
            if (arr[i][j] == given_num)
            {
                will_take = true;
            }
            
        }
    }

    if (!will_take)
    {
        printf("will take number");
    }else{
        printf("will not take number");
    }
    
    
    return 0;
}