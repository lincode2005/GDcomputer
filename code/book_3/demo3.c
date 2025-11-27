/*
例题3.2 用getchar函数输入字符
*/

#include <stdio.h>


int main()
{
    char a, b, c;
    a = getchar();
    b = getchar();
    c = getchar();
    putchar(a);
    putchar(b);
    putchar(c);
    return 0;
}