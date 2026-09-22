// wap in c character array by using this display the name of five person

#include <stdio.h>

void userName(char[]);

int main()
{
    userName("Ranjit");
    userName("Umesh");
    userName("Sagar");
    userName("Aarav");
    userName("Pallav");
    return 0;
}

void userName(char name[])
{
    printf("Welcome %s\n", name);
}