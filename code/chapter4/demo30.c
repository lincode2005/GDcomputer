#include <stdio.h>

int main()
{   
    int a = 10;
    switch(a++)
    {
        case 10: case 11: a = a+20;
        case 12: case 13: a = a+9; break;
        default: printf("56");
    }
    printf("%d", a);
    return 0;
}

