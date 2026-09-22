
#include <stdio.h>

int addition(int, int, int); // prototype
int multiply(int, int, int); // prototype

int main()
{
    int num1 = 4, num2 = 3, num3 = 2, multiAnswer, addAnswer;
    addAnswer = addition(num1, num2, num3);   // actual
    multiAnswer = multiply(num1, num2, num3); // actual
    printf("So the addition of %d , %d and %d is %d\n", num1, num2, num3, addAnswer);
    printf("So the multiply of %d , %d and %d is %d", num1, num2, num3, multiAnswer);
    return 0;
}
// defination;
int multiply(int a, int b, int c) // formal
{
    return a * b * c;
}
int addition(int a, int b, int c) // formal
{
    return a + b + c;
}