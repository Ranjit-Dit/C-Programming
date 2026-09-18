#include <stdio.h>

int main()
{
    int num;
    printf("1000030928\n");
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            printf("%d ", i);
    }

    return 0;
}