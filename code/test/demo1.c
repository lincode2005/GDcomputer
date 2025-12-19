#include <stdio.h>

int main()
{
    char c[10];
    c[0] = ' ';
    scanf("%s", &c[1]);
    printf("%s", c);

    return 0;
}
