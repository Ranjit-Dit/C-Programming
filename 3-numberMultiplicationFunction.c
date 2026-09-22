// wap in c to perform multiplication of 3 numbers all the variable having the data types int use the concept of function declaration defination actual parameter and formal parameter

#include <stdio.h>

int multiply(int, int, int); // prototype

int main()
{
    int num1, num2, num3, answer;
    printf("Enter the numbers : ");
    scanf("%d %d %d", &num1, &num2, num3);
    answer = multiply(num1, num2, num3); // actual
    printf("So the multiply of %d , %d and %d is %d", num1, num2, num3, answer);
    return 0;
}
// defination;
int multiply(int a, int b, int c) // formal
{
    return a * b * c;
}