#include <stdio.h>

int binarySearch(int num[], int target, int len)
{
    int left = 0, right = len - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (num[mid] == target)
            return mid;
        if (target > num[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{

    int nums[] = {2, 5, 6, 8, 9, 11, 23, 42};
    int index = binarySearch(nums, 42, sizeof(nums) / sizeof(nums[0]));
    printf("So the index of the target is %d", index);
    return 0;
}