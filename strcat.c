// consider there are two array A1 = "welcome", A2= USer
#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[30] = "Welcome ", secondName[30] = "User";
    strcat(firstName, secondName);
    printf("%s", firstName);
    return 0;
}