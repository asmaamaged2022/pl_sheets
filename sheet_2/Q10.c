#include <stdio.h>
const int r = 5;
void cal(int x[][r], int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    for (int i = 0; i < num; i++)
    {
        int sum = 0;

        for (int j = 0; j < r; j++)
        {
            sum += x[i][j];
        }
        printf("averege greds of student %d is %.2f \n", i + 1, sum / (float)r);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    int x[num][r];
    cal(x, num);
}
