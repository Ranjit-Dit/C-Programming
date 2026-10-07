// Develop a program to find the sum and average of matrix elements.

#include <stdio.h>

#define row 5
#define col 5

void sumAverageMartix(int matrix[row][col])
{
    int sum = 0;
    float average;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += matrix[i][j];
        }
    }
    average = sum / (float)(row * col);
    printf("So the sum and average is %d and %f\n", sum, average);
}

int main()
{
    int matrix[row][col] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
    };

    sumAverageMartix(matrix);

    printf("1000030928\n");
    return 0;
}