#include <stdio.h>
#define N 5

struct Student
{
     int num;
     float score;
     char name[20];
};

int main()
{
    struct Student stu[N] = {
        {101, 66.5, "Àî"},
        {102, 56.5, "ÕÅ"},
        {103, 90, "Áõ"},
        {104, 72, "Ëï"},
        {101, 80.5, "Íõ"},
    };
    return 0;
}

