#include <stdio.h>
const int r=3;
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
            if (x[i][j] == 0)
                flag++;
    }
    if (flag > (size * r) / 2)
        printf("matrix is sparse");
    else
        printf("matrix is not sparse");
}
int main()
{
    int x[3][r];
    checke(x, 3);
}