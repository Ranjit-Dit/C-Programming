#include <stdio.h>

int main()
{
    int num[100];
    int choice, sum = 0;
    printf("Enter the number of data u want to entered : ");
    scanf("%d", &choice);
    for (int i = 0; i < choice; i++)
    {
        printf("Enter the %d number : ", i + 1);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < choice; i++)
    {
        sum += num[i];
    }
    printf("So the sum is %d", sum);

    return 0;
}