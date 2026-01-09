#include <stdio.h>

int main()
{
    struct Student
    {
        int num;
        char name[20];
        struct Dog{
            int age;
        }dahuang;
        float score;
    }lisi;
    lisi.dahuang.age = 12;
    printf("%d", lisi.dahuang.age);
    
    return 0;
}

