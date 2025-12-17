#include <stdio.h>

int main()
{
    char c1[] = "abc";
    char c2[] = {'a', 'b', 'c'};
    printf("c1的开辟的字节: %zu\n", sizeof(c1));
    printf("c2的开辟的字节: %zu\n", sizeof(c2));
    return 0;
}

