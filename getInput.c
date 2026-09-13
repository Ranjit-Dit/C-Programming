#include <stdio.h>

int main()
{
    int num;
    char ch, name[30];
    float decimal;
    printf("1000030928\n");
    printf("Enter the number , decimal , character and string : ");
    scanf("%d %f %c %s", &num, &decimal, &ch, &name);
    printf("So the input number is %d, decimal is %f, character is %c, and string is %s", num, decimal, ch, name);
    return 0;
}