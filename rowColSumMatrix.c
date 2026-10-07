// Develop a program to calculate row-wise and column-wise sum

#include <stdio.h>

#define row 5
#define col 5

void minMaxMatrix(int matrix[row][col])
{
    int rowSum = 0;
    int colSum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            rowSum += matrix[i][j];
        }
    }
    printf("The row-wise sum is %d\n", rowSum);
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            colSum += matrix[j][i];
        }
    }
    printf("The column-wise sum is %d\n", colSum);
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

    minMaxMatrix(matrix);

    printf("1000030928\n");
    return 0;
}