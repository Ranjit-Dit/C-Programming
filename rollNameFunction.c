// wap in c character array by using this display the name of 3 person name rollno

#include <stdio.h>

void userName(char[], int);

int main()
{
    userName("Ranjit", 20);
    userName("Umesh", 30);
    userName("Sagar", 11);
    userName("Aarav", 15);
    userName("Pallav", 19);
    return 0;
}

void userName(char name[], int roll)
{
    printf("Welcome %s\n and Your roll is %d", name, roll);
}