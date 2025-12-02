#include <stdio.h>

int main()
{
    switch(70)
    {
        case 60:
        case 70:
        case 80: printf("及格"); break;
        case 50:
        case 10: printf("不及格"); break;
    }
    return 0;
}

