#include <stdio.h>
#define true 1
#define false 0
int bubbleSorting(int num[], int len)
{
    int swapped;
    for (int i = 0; i < len; i++)
    {
        swapped = false;
        for (int j = 0; j < len - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", num[i]);
    }
}

int main()
{
    int nums[] = {2, 4, 1, 5, 6, 3, 4, 7, 5, 3};
    bubbleSorting(nums, sizeof(nums) / sizeof(nums[0]));
    return 0;
}