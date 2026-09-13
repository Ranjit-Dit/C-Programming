#include <stdio.h>
#include <math.h>

int main()
{
    int count, digits = 0, copy, sum = 0;
    printf("1000030928\n");
    printf("Enter the number : ");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        copy = i;
        while (copy > 0)
        {
            digits++;
            copy /= 10;
        }
        copy = i;
        while (copy > 0)
        {
            sum += pow(copy % 10, digits);
            copy /= 10;
        }
        if (sum == i)
            printf("%d is Armstrong Number.\n", i);

        digits = 0;
        sum = 0;
    }

    return 0;
}