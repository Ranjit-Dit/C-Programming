#include <stdio.h>

int main()
{
    int firstValue = 0, secondValue = 1, next = 0, count,i;
    printf("1000030928\n");
    printf("Enter the number u want : ");
    scanf("%d", &count);
   while(i<=count)
    {
        printf("%d ", next);
        next = firstValue + secondValue;
        firstValue = secondValue;
        secondValue = next;
        i++;
    }

    return 0;
}