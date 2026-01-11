#include <stdio.h>
# define N 3
struct Student
{
    int num;
    char name[20];
    float score[3];
};

void input_s(struct Student stu[])
{
    int i;
    for(i=0; i<N; i++)
        scanf("%d %s %f %f %f",  &stu[i].num, stu[i].name,
        &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
}
int main()
{
    struct Student stu[N];
    struct Student *p;
    p = stu;
    input_s(p);
    return 0;
}

