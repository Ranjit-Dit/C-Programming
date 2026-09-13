#include <stdio.h>

int main()
{
    int num, reverse = 0, copy;
    printf("1000030928\n");
    printf("Enter the number : ");
    scanf("%d", &num);
    copy = num;
    while (copy > 0)
    {
        printf("%d\n", copy % 10);
        copy /= 10;
    }
    return 0;
}