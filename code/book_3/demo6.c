/*
例题3.5 
1. 输出双精度时的有效位数
2. 指数形式输出实数
*/
#include <stdio.h>

int main()
{
    double a, b;
    a = 11111111.11111111;
    b = 22222222.22222222;
    printf("%f\n", a+b);
    printf("%.8f\n", a+b);
    printf("%e", 123.456);
    return 0;
}

