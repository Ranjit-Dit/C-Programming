#include <stdio.h>

int main()
{
    int num;
    printf("1000030928\n");
    printf("Enter the number between 1 to 7  : ");
    scanf("%d", &num);

Repeat:
    switch (num)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("TuesDay");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thrusday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;

    default:
        printf("Indvalid number : ");
        goto Repeat;
        break;
    }
    return 0;
}