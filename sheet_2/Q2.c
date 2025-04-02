#include <stdio.h>
int check(int x[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (x[0] > x[i])
            return 1;
    }
    return 2;
}
int main()
{
    int x[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
    }
    if (check(x, 5) == 2)

        printf("ascending");

    else if (check(x, 5) == 1)

        printf(" not ascending ");
}