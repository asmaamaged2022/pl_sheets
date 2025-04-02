#include <stdio.h>
int main()
{
    int x[10];
    float aver;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    int max = x[0], min = x[0], sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (max < x[i])
        {
            max = x[i];
        }
        if (min > x[i])
        {
            min = x[i];
        }
        sum += x[i];
    }
    aver = sum / 10.0;
    printf("max = %d ,min =%d ,aver =%.2f", max, min, aver);
}