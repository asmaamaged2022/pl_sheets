#include <stdio.h>
int main()
{
    int x[10], od = 0, ev = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (x[i] % 2 == 0)
        {
            ev += x[i];
        }
        else
        {
            od += x[i];
        }
    }
    printf("sum of even = %d ,sum of odd = %d", ev, od);
}