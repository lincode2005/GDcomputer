/*
例题3.8 从键盘输入一个大写字母，要求改用小写字母输出
*/
#include <stdio.h>

int main()
{
    char c1, c2;
    c1 = getchar();
    printf("%c, %d\n", c1, c1);
    c2 = c1 + 32;
    printf("%c, %d\n", c2, c2);
    return 0;
}

