// wap to find the character m

#include <stdio.h>
#include <string.h>

int main()
{
    char wish[] = "Good Morning";
    char *ptr = strchr(wish, 'M');
    printf("%d\n", ptr);
    printf("%d\n", *ptr);
    printf("%d\n", &ptr);
    printf("%c\n", ptr);
    printf("%c\n", *ptr);
    printf("%d\n", wish);
    printf("%d\n", &wish);
    printf("%d\n", *wish);
    printf("%c\n", *wish);
    
    if (ptr != NULL)
        printf("Character found at position %ld", ptr - wish);
    else
        printf("Character not found");
    return 0;
}