#include <stdio.h>

int main()
{
    struct Student
    {
        char name[20];
        int age;
    }stu[3]={{"张三", 18}, {"李四", 19}, {"王五", 20}};
    int i;
    for(i=0; i<3; i++)
        printf("name=%s, age=%d\n", stu[i].name, stu[i].age);
    return 0;
}