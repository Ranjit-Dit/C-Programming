#include <stdio.h>
#include <string.h>

int main()
{
    char yourName[20], motherName[20];
    printf("Enter the your name : ");
    gets(yourName);
    printf("Enter the mother name : ");
    gets(motherName);
    printf("Your name is %s and it has %d characters.\n", yourName, strlen(yourName));
    printf("Your name is %s and it has %d characters.\n", motherName, strlen(motherName));
    return 0;
}