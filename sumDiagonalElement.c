// Develop a program to print diagonal elements

#include <stdio.h>

#define row 5
#define col 5

void diagonalSumElement(int matrix[row][col])
{

    int diagonalSum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
                diagonalSum += matrix[i][j];
        }
    }
    printf("So The sum is %d\n", diagonalSum);
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

    diagonalSumElement(matrix);

    printf("1000030928\n");
    return 0;
}