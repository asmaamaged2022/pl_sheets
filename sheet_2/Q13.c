#include <stdio.h>
#define PI 3.1428
void cal(float w[],float x)
{
    float area, circ;
    circ = 2 * PI * x;
    area = PI * x * x;
    w[1] = circ;
    w[0] = area;
}
int main()
{
    float w[2];
    float red;
    scanf("%f", &red);
    cal(w,red);
    printf("area = %.2f \ncircumference = %.2f", w[1], w[0]);
}