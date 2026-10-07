// Develop a program to print array in reverse order.

#include <stdio.h>

void reverseArray(int numx[], int length)
{

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%d\n", numx[i]);
    }
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8};
    reverseArray(nums, sizeof(nums) / sizeof(nums[0]));
    printf("1000030928");
    return 0;
}