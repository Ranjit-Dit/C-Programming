
// define linear search perform linear search operation array

#include <stdio.h>

int linearSearch(int arr[], int searchTarget)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == searchTarget)
            return i;
    }
    return -1;
}

int main()
{
    int num[] = {2, 9, 3, 1, 8};
    int target, index;

    printf("Enter the target number : ");
    scanf("%d", &target);

    index = linearSearch(num, target);

    printf("So the target is present at %d.", index + 1);

    
    return 0;
}