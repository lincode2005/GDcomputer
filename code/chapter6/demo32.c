#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10] = "abcd";
    printf("%zu\n", strlen(s1));
    printf("%zu", sizeof(s1));
    return 0;
}

