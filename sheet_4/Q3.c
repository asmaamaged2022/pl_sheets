#include <stdio.h>
#define x 5
int check(int *arr)
{
    int flag = 0;

    for (int i = 1; i < x; i++)

    {

        if (arr[i] > arr[i - 1])
        {
            flag++;
        }
    }
    return flag;
}
int main()
{
    int arr[x];
    int *poi = arr;
    for (int i = 0; i < x; i++)
    {
        scanf("%d", poi);
        ++poi;
    }

    if (check(arr) == x-1)
        printf("ascending");
    else
    {
        printf("not  ascending");
    }
}