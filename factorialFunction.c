// factorial Number

#include <stdio.h>

long factorial(int num)
{
    long factValue = 1;
    while (num > 0)
    {
        factValue *= num;
        num--;
    }
    return factValue;
}

int main()
{
    int num;
    printf("Enter the number u want the factorial : ");
    scanf("%d", &num);
    printf("So the factorial is %ld", factorial(num));
    return 0;
}