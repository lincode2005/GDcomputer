#include <stdio.h>
#include <string.h>
struct Student{
    int num;
    char names[20];
};


void fun(struct Student *p)
{
    p->num = 1;
    strcpy(p->names, "zhangsan");
}

int main()
{

    struct Student zhangsan;
    struct Student *p;
    p = &zhangsan;
    fun(p);
    printf("%s-%d\n", p->names, p->num);
    return 0;
}

