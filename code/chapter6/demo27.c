#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10] = "ab\0cdef";
    char s2[] = "qw";
    strcat(s1, s2);
    puts(s1);
    return 0;
}

