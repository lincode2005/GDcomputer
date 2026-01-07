#include <stdio.h>
struct Student
{
    int num;
    char name[20];
    float score;
};

int main()
{
    struct Student zhangsan;
    printf("%zu", sizeof(zhangsan));
    return 0;
}

