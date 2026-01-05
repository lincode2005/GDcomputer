#include <stdio.h>

int main()
{
    char str[] = "hello";
    printf("%s\n",  str);
    printf("%s\n",  str+1);
    printf("%c\n",  *(str+1));
    return 0;
}

