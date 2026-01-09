#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    int num;
    float score;
}lisi;

int main()
{   
    struct Student *p; // 定义一个结构体指针变量
    p = &lisi;
    strcpy((*p).name, "李四");
    (*p).num = 2;
    (*p).score = 95.5;
    printf("%s, %d, %.2f", (*p).name, (*p).num, (*p).score);
    return 0;
}



