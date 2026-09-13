#include <stdio.h>

int main()
{
    int startingNumber, endingNumber;
    int i, sum = 0;
    printf("Enter the Starting Number : ");
    scanf("%d", &startingNumber);
    printf("Enter the Ending Number : ");
    scanf("%d", &endingNumber);
    i = startingNumber;
    while (i <= endingNumber)
    {
        sum += i;
        i++;
    }
    printf("%d", sum);
    return 0;
}