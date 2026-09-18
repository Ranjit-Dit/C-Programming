// how strcpy and and strcat different from each other justify with program

// consider there are two array A1 = "welcome", A2= USer
#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[30] = "Welcome ", secondName[30] = "User", emptyString[30], country[30] = "to India";
    strcat(firstName, country);
    printf("%s\n", firstName);
    strcpy(emptyString, firstName);
    printf("%s is also same", emptyString);

    return 0;
}