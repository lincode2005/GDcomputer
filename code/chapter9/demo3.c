#include <stdio.h>
struct 
{
    int num;
    char name[21];
    float score;
}zhangsan;

struct Student zhangsan; // 结构体变量的作用范围更广

int main()
{
    
    printf("%zu", sizeof(zhangsan));
    return 0;
}

