// Write a C program to print Sum and Average of  N numbers.

#include <stdio.h>

int main()
{
    int num, sum = 0, N, average;
    printf("1000030928\n");
    printf("How much number u want to enter : ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &num);
        sum += num;
    }
    average = sum / N;
    printf("So the sum is %d and average is %d", sum, average);
    return 0;
}