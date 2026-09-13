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
        reverse = reverse * 10 + copy % 10;
        copy /= 10;
    }
    printf("So the reverse is %d", reverse);
    return 0;
}