#include <stdio.h>

int binarySearch(int list[], int target, int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int middle = start + (end - start) / 2;
        if (list[middle] == target)
            return middle;
        if (list[middle] < target)
            start = middle + 1;
        else
            end = middle - 1;
    }
    return -1;
}

int main()
{
    int nums[] = {2, 3, 6, 7, 9, 11, 13, 15, 21, 24};
    int position = binarySearch(nums, 21, 10);
    printf("So the target value is at %d position", position);
    return 0;
}