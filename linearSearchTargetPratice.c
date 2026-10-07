#include <stdio.h>

int binarySearch(int num[], int target, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (num[i] == target)
            return i;
    }

    return -1;
}

int main()
{

    int nums[] = {2, 5, 6, 8, 9, 11, 23, 42};
    int index = binarySearch(nums, 42, sizeof(nums) / sizeof(nums[0]));
    printf("So the index of the target is %d\n", index);
    printf("1000030928");
    return 0;
}