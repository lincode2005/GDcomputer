#include <stdio.h>

int main()
{
    struct Student
    {
        int num;
        char name[20];
        float score;
    };
    struct Student zhangsan = {1, "zhangsan", 95.5}; 
    printf("name=%s", zhangsan.name);
    return 0;
}

