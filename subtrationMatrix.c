// Develop a program to perform matrix addition (A + B)

#include <stdio.h>

#define row 5
#define col 5

void diffMatrix(int matrix1[row][col], int matrix2[row][col])
{
    int dif[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            dif[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", dif[i][j]);
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

    diffMatrix(matrix1, matrix2);

    printf("1000030928\n");
    return 0;
}