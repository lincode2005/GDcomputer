#include <stdio.h>

int main()
{
    char ch;
    for(;(ch=getchar()) != '\n';)
        printf("%c\n", ch);
    return 0;
}

