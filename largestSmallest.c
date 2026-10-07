// Develop a program to find the largest and smallest array element in C

#include <stdio.h>

void largestSmallest(int numx[], int len)
{
    int largest = numx[0];
    int smallest = numx[0];
    for (int i = 0; i < len; i++)
    {
        if (largest < numx[i])
            largest = numx[i];

        if (smallest > numx[i])
            smallest = numx[i];
    }
    printf("So the smallest and largest are %d and %d\n", smallest, largest);
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8};
    largestSmallest(nums, sizeof(nums) / sizeof(nums[0]));
    printf("1000030928");
    return 0;
}