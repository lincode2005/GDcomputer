#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10] = "abcdef";
    char s2[] = "qw\0er";
    strcpy(s1, s2);
    puts(s1);
    return 0;
}

