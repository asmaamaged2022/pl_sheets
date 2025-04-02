#include <stdio.h>
const int r = 3;
void checke(int x[][r], int size)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            scanf("%d", &x[i][j]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if (x[i][j] == x[j][i])
                flag++;
    }
    if (flag == (size * r))
        printf("symmetric");
    else
        printf(" not symmetric");
}
int main()
{
    int x[3][3];
    checke(x, 3);
}