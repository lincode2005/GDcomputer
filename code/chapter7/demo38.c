#include <stdio.h>

int f(int c)
{
    static int a = 2;  // 只赋初值一次
    int b = 1;  // 每调用一次就会重新赋值
    a++;
    b++;
    return a+b+c;
}

int main()
{
    int i;
    for(i=0; i<2; i++)
        printf("%d ", f(i)); 
    return 0;
}

