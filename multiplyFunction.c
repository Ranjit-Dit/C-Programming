// assume there is function multiply where use need to create of 2 number

#include <stdio.h>

int multiply(int, int);

int main()
{
    int num1, num2, answer;
    printf("Enter the numbers : ");
    scanf("%d %d", &num1, &num2);
    answer = multiply(num1, num2);
    printf("So the multiply of %d and %d is %d", num1, num2, answer);
    return 0;
}

int multiply(int a, int b)
{
    return a * b;
}