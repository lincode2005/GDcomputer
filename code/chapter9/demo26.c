#include <stdio.h>

struct Student
{
    int num;
    struct Student *next;
};

int main()
{
    struct Student stu1, stu2, stu3, stu4, *head;
    stu1.num = 1;
    stu1.next = &stu2;

    stu2.num = 2;
    stu2.next = &stu3;

    stu3.num = 3;
    stu3.next = &stu4;

    stu4.num = 4;
    stu4.next = NULL;

    head = &stu1;

    struct Student *p;
    p = head;

    while (p!=NULL)
    {
        printf("%d\n", p->num);
        p = p->next;
    }
    


    return 0;
}
