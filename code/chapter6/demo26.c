#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10] = "abc";
    char s2[] = "qwe";
    strcat(s1, s2);
    puts(s1);
    return 0;
}

