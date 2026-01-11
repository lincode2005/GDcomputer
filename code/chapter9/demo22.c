#include <stdio.h>
#define N 5

struct Student
{
    char name[20];
    int num;
    float score;
}stu[N];

int main()
{
    struct Student *p;
    for(p=stu; p<stu+N; p++)
        scanf("%s%d%f", p->name, &p->num, &p->score);
    
    for(p=stu; p<stu+N; p++)
        printf("%s, %d, %.2f\n", p->name, p->num, p->score);
    return 0;
}

