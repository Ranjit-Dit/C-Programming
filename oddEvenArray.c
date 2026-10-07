// Develop a program to count odd and even elements of an array.

#include <stdio.h>

void oddEven(int numx[], int len)
{
    int odd = 0;
    int even = 0;
    for (int i = 0; i < len; i++)
    {
        if (numx[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("So the odd and even are %d and %d\n", odd, even);
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8};
    
    oddEven(nums, sizeof(nums) / sizeof(nums[0]));
    printf("1000030928");
    return 0;
}