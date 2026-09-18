<<<<<<< HEAD
=======
// Write a C program to print Sum and Average of  N numbers.

>>>>>>> master
#include <stdio.h>

int main()
{
<<<<<<< HEAD
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }

=======
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
>>>>>>> master
    return 0;
}