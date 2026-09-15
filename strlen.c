#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    printf("Enter the name : ");
    gets(name);
    printf("Your name is %s and it has %d characters.", name, strlen(name));
    return 0;
}