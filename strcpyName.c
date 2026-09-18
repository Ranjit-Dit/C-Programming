// wap to in cto copy the content of one array as ambika,mita

#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[] = "Ambika", secondName[30];
    strcpy(secondName, firstName);
    printf("Sot the first name is %s", secondName);
    return 0;
}