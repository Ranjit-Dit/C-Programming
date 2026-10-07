// Develop a program to perform the addition of two arrays.

#include <stdio.h>

void arraySum(int numx1[], int numx2[], int len)
{
    int sum[len];
    for (int i = 0; i < len; i++)
    {
        sum[i] = numx1[i] + numx2[i];
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", sum[i]);
    }
}

int main()
{
    int nums1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int nums2[] = {11, 22, 33, 44, 55, 66, 77, 88};
    arraySum(nums1, nums2, sizeof(nums1) / sizeof(nums1[0]));
    printf("1000030928");
    return 0;
}