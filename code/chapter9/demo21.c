#include <stdio.h>
#define N 5

struct Student
{
     int num;
     float score;
     char name[20];
};

int main()
{
    struct Student stu[N] = {
        {101, 66.5, "李"},
        {102, 56.5, "张"},
        {103, 90, "刘"},
        {104, 72, "孙"},
        {101, 80.5, "王"},
    };
    struct Student *p;
    p = stu; // 指向结构体数组的首元素
    for (p; p<stu+N; p++)
    {
        printf("num = %d, name = %s, score = %.1f\n", p->num, p->name, p->score);
    }
    return 0;
}

