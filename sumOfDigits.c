#include <stdio.h>

int main()
{
    int num, sum = 0, copy;
    printf("1000030928\n");
    printf("Enter the number : ");
    scanf("%d", &num);
    copy = num;
    while (copy > 0)
    {
        sum += copy % 10;
        copy /= 10;
    }
    printf("So the sum is %d", sum);
    return 0;
}