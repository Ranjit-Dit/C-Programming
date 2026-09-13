#include <stdio.h>

int main()
{
    int num, i = 1;

    printf("Enter the number : ");
    scanf("%d", &num);

    do
    {
        printf("The square and cube of %d is %d and %d\n", i, i * i, i * i * i);
        i++;
    } while (i <= num);

    return 0;
}