#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of Pascal's Triangle: ");
    scanf("%d", &size);

    int pascal[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            if (j == 0 || j == i)
            {
                pascal[i][j] = 1;
            }
            else
            {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}
