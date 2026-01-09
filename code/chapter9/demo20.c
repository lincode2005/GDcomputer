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
    struct Student *p;
    p = &lisi;
    strcpy(p->name, "ÀîËÄ");
    p->num = 101;
    p->score = 85.5;
    printf("%s, %d, %.2f", p->name, p->num, p->score);
    return 0;
}

