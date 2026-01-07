#include <stdio.h>

int main()
{
    struct Student
    {
        int num;
        char name[20];
        float score;
    };
    struct Student zhangsan; 
    zhangsan = {1, "zhangsan", 95.5};
    return 0;
}
