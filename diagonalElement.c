// Develop a program to print diagonal elements

#include <stdio.h>

#define row 5
#define col 5

void diagonalElement(int matrix[row][col])
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
                printf("%d\n", matrix[i][j]);
        }
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

    diagonalElement(matrix);

    printf("1000030928\n");
    return 0;
}