#include <stdio.h>
#include <string.h>

int main()
{
    struct Student
    {
        int num;
        char name[20];
        float score;
    };
    struct Student zhangsan;
    strcpy(zhangsan.name, "zhangsan");
    zhangsan.num = 1;
    zhangsan.score = 95.5;
    printf("name = %s", zhangsan.name);
    return 0;
}

