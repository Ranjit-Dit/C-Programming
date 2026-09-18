#include <stdio.h>

int main()
{
    int num;
    printf("1000030928\n");
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = 2; i <= num; i += 2)
    {
        printf("%d ", i);
    }

    return 0;
}