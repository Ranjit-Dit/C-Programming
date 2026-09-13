#include <stdio.h>

int main()
{
    int num;
    printf("1000030928\n");
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = num; i > 0; i--)
    {
        printf("%d ", i);
    }

    return 0;
}