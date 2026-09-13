#include <stdio.h>

int main()
{
    int num[100];
    int choice, sum = 0, largest;
    printf("Enter the number of data u want to entered : ");
    scanf("%d", &choice);
    for (int i = 0; i < choice; i++)
    {
        printf("Enter the %d number : ", i + 1);
        scanf("%d", &num[i]);
    }
    largest = num[0];
    for (int i = 0; i < choice; i++)
    {

        if (largest < num[i])
        {
            largest = num[i];
        }
    }
    printf("So the largest is %d", largest);

    return 0;
}