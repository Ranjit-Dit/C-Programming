#include <stdio.h>

// Write the programs to demonstrate the use of break, continue, and goto statements

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 6)
            goto AB;
        printf("%d\n", i);
    }
AB:
    printf("It just Jumped");
    return 0;
}