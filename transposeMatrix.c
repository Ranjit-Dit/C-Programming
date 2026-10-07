// Develop a program to calculate row-wise and column-wise sum

#include <stdio.h>

#define row 5
#define col 5

void transpose(int matrix[row][col])
{
    int transposeMatrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transposeMatrix[j][i] = matrix[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", transposeMatrix[i][j]);
        }
        printf("\n");
    }
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

    transpose(matrix);

    printf("1000030928\n");
    return 0;
}