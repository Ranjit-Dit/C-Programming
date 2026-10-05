#include <stdio.h>

// increse -- top -- decrease {6,7,8,9,10,4,3,2}
//  increase --> {1,2,3,4,5,6}

int peakIndexInMountainArray(int *arr, int arrSize)
{
    int start = 0;
    int end = arrSize - 1;
    int mid = 0;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[start] > arr[end])
    }
}

// int peakIndexInMountainArray(int *arr, int arrSize)
// {
//     int peakIndex = 0;
//     int peakValue = arr[0];
//     for (int i = 0; i < arrSize; i++)
//     {
//         if (peakValue < arr[i])
//         {
//             peakValue = arr[i];
//             peakIndex = i;
//         }
//     }
//     return peakIndex;
// }

int main()
{
    int nums[] = {0, 10, 5, 2};
    printf("So the peak Value index is %d", peakIndexInMountainArray(nums, 4));
    return 0;
}