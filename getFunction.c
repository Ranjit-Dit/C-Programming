#include <stdio.h>

int main()
{
    char name[20], anotherName[20];
    printf("Enter the name. : ");
    scanf("%s", name);
    printf("Enter the another name. : ");
    gets(anotherName);
    printf("This is using scanf = %s\nThis is using gets function = %s", name, anotherName);
    return 0;
}