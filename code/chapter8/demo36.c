#include <stdio.h>

int main()
{
    char str[] = "abcdefg";
    char *p = str;
    printf("%s\n", p);
    printf("%s", p+1);
    return 0;
}

