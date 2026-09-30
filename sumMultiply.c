// wap in c sumation of three number and multiplication of 4 number suing user definced number and reutrn statement

#include <stdio.h>

int sum(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}
int multiply(int num1, int num2, int num3, int num4)
{
    return num1 * num2 * num3 * num4;
}

int main()
{
    int totalSum = 0;
    long int totalMultiply = 1;
    totalSum = sum(10, 20, 30);
    totalMultiply = multiply(10, 20, 30, 40);
    printf("So the total sum is %d.\nSo the total multiplication is %ld.", totalSum, totalMultiply);
    return 0;
}