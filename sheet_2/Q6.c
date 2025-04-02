#include <stdio.h>
int main()
{
    int x[2][2], sum1 = 0, sum2 = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            scanf("%d", &x[i][j]);
    }
    for (int j = 0; j < 2; j++)
    {
        sum1 += x[0][j];
    }
    for (int j = 0; j < 2; j++)
    {
        sum2 += x[1][j];
    }
    if (sum1 > sum2)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", x[0][j]);
        }
    }
    if (sum1 < sum2)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", x[1][j]);
        }
    }
}