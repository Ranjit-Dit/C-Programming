// Develop a program to perform matrix multiplication(A × B)

#include <stdio.h>

#define row 5
#define col 5

void multiplicationMatrix(int matrix1[row][col], int matrix2[row][col])
{
    int multiplication[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            multiplication[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", multiplication[i][j]);
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

    multiplicationMatrix(matrix1, matrix2);

    printf("1000030928\n");
    return 0;
}