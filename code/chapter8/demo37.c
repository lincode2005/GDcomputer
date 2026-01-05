#include <stdio.h>

int main()
{
    char str[] = "abcdefg";
    char *p = str;
    printf("%c\n", *p);
    printf("%c", *(p+1));
    return 0;
}

