#include <stdio.h>
void cal(int x[], int w[], int y)
{
    int max = x[0], min = x[0], sum = 0;
    for (int i = 0; i < y; i++)
    {
        if (max < x[i])
            max = x[i];
        if (min > x[i])
            min = x[i];
        sum += x[i];
    }
    w[0] = max;
    w[1] = min;
    w[2] = sum;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5}, size = 5, w[3];
    cal(arr, w, size);
    printf("The maximum value in the array is %d\n The minimum value in the array is%d\nThe average value of the array is %f", w[0], w[1], w[2] / 5.0);
}