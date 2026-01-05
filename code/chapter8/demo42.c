#include <stdio.h>

int main()
{
    char *p;
    scanf("%s", p);  // p未指向具体地址，错误
    printf("%s", p);
    return 0;
}

