#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int found = 0;
    for (int i = a; i <= b; i++)
    {
      //store i in a variable
      int real_i = i;

      int lucky = 1;
      while (real_i > 0)
      {
        int digit = real_i % 10;
        // printf("%d\n",digit);
        if (digit != 4 && digit != 7)
        {
            lucky = 0;
            break;
        }
        
        real_i /= 10;
      }
      if (lucky == 1)
      {
        found = 1;
        printf("%d ",i);
      }
      
      
    }
    if (!found)
    {
        printf("-1");
    }
    
    
    return 0;
}