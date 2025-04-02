#include <stdio.h>
int main()
{
    int x[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            scanf("%d", &x[i][j]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", x[i][j]);
        printf("\n");
    }
}