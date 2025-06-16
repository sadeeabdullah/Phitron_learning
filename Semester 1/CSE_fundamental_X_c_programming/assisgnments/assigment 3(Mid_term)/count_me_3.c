#include<stdio.h>
#include<string.h>
int main(){
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        char s[10001];
        scanf("%s", s);
        int len_s = strlen(s);
        int cnt_cptl = 0, cnt_sml = 0, cnt_dgt = 0;
        for (int i = 0; i < len_s; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                cnt_sml++;
            }else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cnt_cptl++;
            }else if (s[i] >= '0' && s[i] <= '9')
            {
                cnt_dgt++;
            }
             
        }
        printf("%d %d %d\n", cnt_cptl, cnt_sml, cnt_dgt);
    }
    
    
    return 0;
}