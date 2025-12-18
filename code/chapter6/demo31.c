#include <stdio.h>
#include <string.h>

int main()
{
    printf("%d\n", strcmp("ab", "ab\0qw"));
    return 0;
}

