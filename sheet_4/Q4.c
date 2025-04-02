#include <stdio.h>
int main()
{
    int arr[10], even = 0, odd = 0;

    int *poi = arr;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", poi);
        ++poi;
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even += arr[i];
        }
        else
        {
            odd += arr[i];
        }
    }
    printf("sum of even = %d ,sum of odd =%d", even, odd);
}