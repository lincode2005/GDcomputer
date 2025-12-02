#include <stdio.h>

int main()
{
    int a = 3, b = 2;
    switch (a>b)
    {
        case 1: printf("1 ");
        case 2: printf("2"); break;
        default: printf("default");
    }
    return 0;
}

