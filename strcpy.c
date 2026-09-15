#include <stdio.h>
#include <string.h>
// wap to utilize strcmp function and strcpy funtcion

int main()
{
    char firstName[30], secondName[30], winner[30];
    int comparsion;
    printf("Enter the first friend name : ");
    gets(firstName);
    printf("Enter the second friend name : ");
    gets(secondName);
    comparsion = strcmp(firstName, secondName);
    if (comparsion == 0)
    {
        printf("Both have same name");
    }
    else if (comparsion > 0)
    {
        strcpy(winner, firstName);
        printf("%s is greater", winner);
    }
    else
    {
        strcpy(winner, secondName);
        printf("%s is greater", winner);
    }

    return 0;
}
