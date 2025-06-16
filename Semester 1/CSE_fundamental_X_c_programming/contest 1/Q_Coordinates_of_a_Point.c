#include <stdio.h>
#include <stdbool.h>
bool pos_or_neg(float i)
{
    if (i > 0)
    {
        return true;
    }
    else if (i < 0)
    {
        return false;
    }
}
int main()
{
    float x, y;
    scanf("%f %f", &x, &y);
    if (x == 0 && y == 0)
    {
        printf("Origem");
        return 0;
    }
    else if (x == 0)
    {
        printf("Eixo Y");
        return 0;
    }
    else if (y == 0)
    {
        printf("Eixo X");
        return 0;
    }

    if (pos_or_neg(x) && pos_or_neg(y))
    {
        printf("Q1");
    }
    else if (!pos_or_neg(x) && pos_or_neg(y))
    {
        printf("Q2");
    }
    else if (pos_or_neg(x) && !pos_or_neg(y))
    {
        printf("Q4");
    }
    else
    {
        printf("Q3");
    }

    return 0;
}