#include <stdio.h>
void rev(int x[], int y)
{
    int w[y];
    for (int i = 0, j = y - 1; i < y; i++, j--)
    {
        w[i] = x[j];
    }
    for (int j = 0; j < y; j++)
        printf("%d ", w[j]);
}
int main()
{
    int r;
    printf("write size ");
    scanf("%d", &r);
    printf("input data \n");
    int x[r];
    for (int i = 0; i < r; i++)
    {
        scanf("%d", &x[i]);
    }
    rev(x, r);
}