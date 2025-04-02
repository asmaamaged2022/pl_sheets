#include <stdio.h>
int main()
{
    char arr[10];
    char *poi = arr;
    int x = 0, po;
    for (int i = 0; i < 10; i++)
    {
        scanf(" %c", poi);//لازم نحط مسافه عشان ميحصلش error
        poi++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 'z' || arr[i] == 'Z')
        {
            x = 1;
            po = i;
        }
    }
    if (x == 1)
        printf("position is %d ", po+1);
    else
        printf("dose not exist");
}