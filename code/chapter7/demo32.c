#include <stdio.h>

int main()
{
    int a=100;
    {
        printf("%d", a);
        int a=20;
    }
    return 0;
}


