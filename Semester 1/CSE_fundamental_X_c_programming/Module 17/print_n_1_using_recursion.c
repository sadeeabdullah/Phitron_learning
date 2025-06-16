// #include<stdio.h>
// print_n_1(int i){
//     printf("%d\n", i);
//     i--;
//     if (i == 0)
//     {
//         return;
//     }
//     print_n_1(i);
    
// }
// int main(){
//     int i = 5;
//     print_n_1(i);
//     return 0;
// }

#include<stdio.h>

void print1_n(int i){
    
    if (i == 6)
    {
        return;
    }
    print1_n( i+ 1);
    printf("%d\n", i);
    
}

int main(){
    int i = 1; 
    print1_n(i);
    return 0;
}