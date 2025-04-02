#include <stdio.h>
int main()
{
    int arr[10], max, min, sum = 0;
    float aver;
    int *poi = arr;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", poi);
        sum += *poi;
        ++poi;
    }
    aver = sum / 10.0;
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (max < arr[i])
            max = arr[i];

        if (min > arr[i])
            max = arr[i];
    }
    printf("max : %d ,min :%d ,aver :%0.2f", max, min, aver);
}