#include <stdio.h>
int main()
{
    int x[10], flag = 0;
    int *poi=x;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", poi);
        poi++;
    }
    for (int i = 1; i < 10 ; i++ )
    {
        if (x[i-1] > x[i])
            flag = 1;
    }
    for (int i = 1; i < 10 ; i++ )
    {
        if (x[i-1] < x[i])
            flag = 2;
    }
    for (int i = 1; i < 10 ; i++)
    {
        if (x[i-1] == x[i])
            flag = 3;
    }
    switch (flag)
    {
    case 0:
        printf("the numbers in the array are increasing and then decreasing.");
        break;
    case 1:
        printf("the numbers in the array are decreasing");
        break;
    case 2:
        printf("the numbers in the array are increasing");
        break;
    case 3:
        printf("the numbers in the array are not changing");
        break;
    default:
        break;
    }
}