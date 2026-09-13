#include <stdio.h>


int main() {
    int num[]={55,43,88,11,22};
    int largest = num[0];
    for (int i = 0; i < 5; i++)
    {
        if(largest < num[i])
            largest = num[i];
    }
    printf("So the largest is %d",largest);
    return 0;
}