// create the user define function one for summation of 4 number and another for subtraction of 2 numbers and multiplication of 5 numbers

#include <stdio.h>

int summation(int num1, int num2, int num3, int num4)
{
    return num1 + num2 + num3 + num4;
}
int subtraction(int num1, int num2)
{
    if (num1 > num2)
        return num1 - num2;
    return num2 - num1;
}

long multiplication(int num1, int num2, int num3, int num4, int num5)
{
    return num1 * num2 * num3 * num4 * num5;
}

int main()
{
    int totalSum,totalSub;
    long totalMult;
    totalSum = summation(10,20,30,40);
    totalSub = subtraction(10,20);
    totalMult = multiplication(10,20,30,40,50);
    printf("So the total sum is %d\n",totalSum);
    printf("So the total sub is %d\n",totalSub);
    printf("So the total multiplication is %ld\n",totalMult);
    return 0;
}