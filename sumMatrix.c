// Develop a program to perform matrix addition (A + B)

#include <stdio.h>

#define row 5
#define col 5

void sumMatrix(int matrix1[row][col], int matrix2[row][col])
{
    int sum[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[row][col] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
    };
    int matrix2[row][col] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
    };

    sumMatrix(matrix1, matrix2);

    printf("1000030928\n");
    return 0;
}