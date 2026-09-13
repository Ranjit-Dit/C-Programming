#include <stdio.h>
#include <math.h>

int main()
{
    int num, count = 0;
    printf("1000030928\n");
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int j = 1; j <= num; j++)
    {
        count = 0;
        for (int i = 2; i <= sqrt(j); i++)
        {
            if (j % i == 0)
                count++;
        }
        if (count == 0)
        {
            printf("%d\n", j);
        }
    }

    return 0;
}