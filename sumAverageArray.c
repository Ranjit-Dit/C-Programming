// Develop a program to calculate the sum and average of n array elements in C

#include <stdio.h>

void sumAverage(int numx[], int len)
{
    int sum = 0;
    float avg;
    for (int i = 0; i < len; i++)
    {
        sum += numx[i];
    }
    avg = sum / (float)len;
    printf("So the sum and average is %d and %f\n", sum, avg);
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8};
    sumAverage(nums, sizeof(nums) / sizeof(nums[0]));
    printf("1000030928");
    return 0;
}