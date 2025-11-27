/*
例题3.6 
用scanf函数输入字符数据
*/

#include <stdio.h>

int main()
{
    char a, b, c;
    scanf("%c%c%c", &a, &b, &c);
    printf("%c%c%c\n", a, b, c);
    return 0;
}