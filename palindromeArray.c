// Develop a program to perform the addition of two arrays.

#include <stdio.h>
#define true 1
#define false 0

void palindromeArray(int numx[], int len)
{
    int reverse[len];
    int palidromeTag = true;
    for (int i = len - 1, j = 0; i >= 0; i--, j++)
    {
        reverse[i] = numx[j];
    }
    for (int i = 0; i < len; i++)
    {
        if (numx[i] != reverse[i])
            palidromeTag = false;
    }
    if (palidromeTag)
        printf("So the array is palidrome");
    else
        printf("So the array isnot palidrome");
}

int main()
{
    int nums1[] = {1, 2, 3, 4, 5, 4, 3, 2,1};
    palindromeArray(nums1, sizeof(nums1) / sizeof(nums1[0]));
    printf("\n1000030928\n");
    return 0;
}