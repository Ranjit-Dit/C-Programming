// wap in c to perfrom multiplication of 3 numbers

#include <stdio.h>

int multiplication(int num1, int num2, int num3)
{
    return num1 * num2 * num3;
}

int main()
{
    int answer;
    answer = multiplication(10, 30, 40);
    printf("The multiplication is %d", answer);
    return 0;
}