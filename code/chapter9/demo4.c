#include <stdio.h>

int main()
{
    // 也可以在main函数中声明结构体类型
    struct Student
    {
        int num;
        char name[20];
        float score;
    }zhangsan={1, "zhangsan", 95.5}, lisi={2, "lisi", 59.5}; 
    return 0;
}

