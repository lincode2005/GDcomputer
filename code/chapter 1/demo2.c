#include <stdio.h>          // 编译预处理


int main()                  // 定义一个主函数
{
    int a, b, sum;          // 定义整型变量a, b, sum
    a = 123;                // 对变量a进行赋值
    b = 456;                // 对变量b进行赋值
    sum = a + b;            // 进行a+b运算，并将结果存放到变量sum中
    printf("sum=%d\n", sum);// 输出结果
    return 0;               // 返回值为0
}

