#include <stdio.h>
#include <math.h>
int binarySearch(int list[], int target, int length)
{

    printf("%d------>", length);
    int left = 0, right = length - 1;
    int pos = (left + right) / 2;
    for (int i = 0; i < sqrt(length); i++)
    {
        if (list[pos] == target)
        {
            return pos;
        }
        if (list[pos] < target)
        {
            left = pos;
            pos = left + (right - left) / 2;
        }
        else
        {
            right = pos;
            pos = left + (right - left) / 2;
        }
        printf("%d\n", list[pos]);
    }
    return -1;
}

int main()
{
    int array[] = {2, 3, 7, 7, 11, 15, 25};
    int result, target = 15;
    result = binarySearch(array, target, sizeof(array) / sizeof(array[0]));
    printf("So the position is %d.", result);
    return 0;
}