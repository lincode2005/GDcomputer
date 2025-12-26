#include <stdio.h>

int b; // 全局变量b的值为0
void fun(int a)
{
    int b=2; // 局部变量b的值为2
    printf("a=%d\n", ++a);
    printf("b=%d\n", b);
    b = 3;
}
int main()
{
    int a=100;
    fun(a);
    printf("%d %d\n", a, b);
}

