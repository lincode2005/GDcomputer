#include <stdio.h>

int main()
{
    struct Student
    {
        int num;
        char name[20];
        float score;
    }lisi;
    scanf("%d%s%f", &lisi.num, lisi.name, &lisi.score);
    printf("%d, %s, %f", lisi.num, lisi.name, lisi.score); 
    return 0;
}

