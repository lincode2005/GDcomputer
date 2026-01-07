#include <stdio.h>
#include <string.h>

int main()
{
    struct Student
    {
        int num;
        char name[20];
        float score;
    }zhangsan, lisi;
    zhangsan.num = 1;
    zhangsan.score = 85.5;
    strcpy(zhangsan.name, "lisi");
    lisi = zhangsan;
    printf("%d, %f, %s", lisi.num, lisi.score, lisi.name);
    return 0;
}

