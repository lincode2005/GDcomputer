#include <stdio.h>


int main()
{
    printf("%c\n", '%');
    printf("%%\n");

    printf("%%d\n", 5);
    printf("%%%d\n", 5);
    return 0;
}

