#include <stdio.h>
#include <string.h>
// wap in c that will ask the user to provide the name of two friends if same name this same

int main()
{
    char firstName[30], secondName[30];
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
        printf("First friend name is greater");
    }
    else
    {
        printf("Second firend name is greater");
    }

    return 0;
}
