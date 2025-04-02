#include <stdio.h>
int main()
{
    int x[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}, z, flag = 0;
    printf("choose number ");
    scanf("%d", &z);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (z == x[i][j])
            {
                printf("position is(%d ,%d)", i+1, j+1);
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("number not found.");
    }
}