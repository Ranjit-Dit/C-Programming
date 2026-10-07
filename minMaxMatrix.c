// Develop a program to find the sum and average of matrix elements.

#include <stdio.h>

#define row 5
#define col 5

void minMaxMatrix(int matrix[row][col])
{
    int min = matrix[0][0];
    int max = matrix[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (max < matrix[i][j])
                max = matrix[i][j];
            if (min > matrix[i][j])
                min = matrix[i][j];
        }
    }
    printf("So the minimum and maxmium is %d and %d\n", min, max);
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