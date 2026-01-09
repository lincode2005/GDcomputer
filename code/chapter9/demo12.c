#include <stdio.h>

int main()
{
    struct Student
    {
        char name[20];
        int age;
    }stu[3]={"张三", 18, "李四", 19, "王五", 20};
    printf("name=%s, age=%d", stu[0].name, stu[0].age);
    return 0;
}

